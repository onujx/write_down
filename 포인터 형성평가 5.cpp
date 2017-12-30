#include <stdio.h>

int main() {
	int i, j, n, imsi;
	int *p;
	
	scanf("%d\n", &n);

	p = new int[n];
	
	for (i = 0; i < n; i++) {
		scanf("%d ", &p[i]);
	}
	
 	for (i = 0; i < n - 1; i++) {
 		 for (j = i + 1; j < n; j++) {
		  
		if (p[i] < p[j]) {
			imsi = p[i];
			p[i] = p[j];
			p[j] = imsi;
			}
		}
	}
	
	
	
	printf("max : %d\nmin : %d", p[0], p[n-1]);
	
	return 0;
}
