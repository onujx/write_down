#include <stdio.h>

void swap (int *x, int *y)
{
	int z = *x;
	*x = *y;
	*y = z;
}

void sort(int *a, int n)
{
	int i, j;
	
	for (i = 0; i < n - 1; i++) {
		for (j = i + 1; j < n; j++)
		{
			if (a[i] < a[j]) {
				swap(&a[i], &a[j]);
			}
		}
	}
}
	
	int main()
	{
		int i, n;
		int *p;
		
		scanf("%d", &n);
		p = new int[n];
		
		for (i = 0; i < n; i++) {
			scanf("%d", &p[i]);
		}
		sort(p, n);
		for (i = 0; i < n; i++) {
			printf("%d ", p[i]);

		}
		printf("\n");
		delete []p;
		return 0;
	}

