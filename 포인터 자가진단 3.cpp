#include <stdio.h>

int main()
{
	int *p1 = new int;
	int *p2 = new int;
	
	
	scanf("%d %d", p1, p2);
	
	printf("%d + %d = %d\n", *p1, *p2, *p1 + *p2);
	printf("%d - %d = %d\n", *p1, *p2, *p1 - *p2);
	printf("%d * %d = %d\n", *p1, *p2, *p1 * *p2);
	printf("%d / %d = %d\n", *p1, *p2, *p1 / *p2);
	
	return 0;
	
}
