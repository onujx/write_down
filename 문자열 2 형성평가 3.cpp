#include <stdio.h>
#include <string.h> 

int main()
{
	char str[50][100];
	int cnt = 0, i;
	
	while(1) {
		gets(str[cnt]);
 	
		
		if ((strcmp(str[cnt],"0")==0)) {
			break;	cnt++;
		}
		cnt++;
	}
				printf("%d\n", cnt);
			for(i = 0; i < cnt; i+= 2){
		puts(str[i]);
		}
		
		return 0;	
}
