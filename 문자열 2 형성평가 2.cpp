#include <stdio.h>
#include <string.h>

int main()
{
	int i, j, flag = 0;
	
	char ch;
	char str[5][20] = {"flower", "rose", "lily", "daffodil", "azalea"};
	
	scanf(" %c", &ch);
	
	for (i = 0; i < 5; i++) {
		if (str[i][1] == ch || str[i][2] == ch) {
			puts(str[i]);
			flag++;
		}
		if (i == 4){
		
			if(flag == 0)
			puts("0");
			
			else 
	printf("%d", flag);
	}
}

	return 0;
}
