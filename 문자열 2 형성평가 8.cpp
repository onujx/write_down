#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char str[100];
	int i, len = 0;
	while(1) {
		scanf("%s", str);
			if (strcmp(str, "END") == 0)
		
		break;
		len = strlen(str);
		for (i = len-1; i >= 0; i--) {
			 printf("%c", str[i]);
		}
		printf("\n");

	}
	
	return 0;
}
