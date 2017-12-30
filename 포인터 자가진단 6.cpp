#include <stdio.h>

void swap (int *x, int *y)
{
	int z = *x;
	*x = *y;
	*y = z;
}

int main()
{
	int i, j, n;
	int *p;

	scanf("%d", &n);
	p = new int[n];

	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++)
		{
			if (p[i] > p[j]) {
				swap(&p[i], &p[j]);
			}
		}
	}
	
	for (i = 0; i < n; i++) {
		printf("%d ", p[i]);
	}

	
	delete []p;
	return 0;
}
