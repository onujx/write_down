#include <stdio.h>

int main()
{
	int n, m, i, j, output = 1;
	
	scanf("%d %d", &n, &m);
	
	for (i = 0; i < n; i++) {
		for (j = 0; j < m; j++) {
			printf("%d ", output++);
		}
		printf("\n");
	}
	return 0;	
}
