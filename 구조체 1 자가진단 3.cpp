#include <stdio.h>
#include <string.h>

struct score
{
	char name[20];
	int kor, eng;
};

int main()
{
	struct score a, b, sum;
	scanf("%s %d %d", &a.name, &a.kor, &a.eng);
	scanf("%s %d %d", &b.name, &b.kor, &b.eng);
	
	
	strcpy(sum.name, "avg");
	sum.kor = (a.kor + b.kor) / 2;
	sum.eng = (a.eng + b.eng) / 2;
	
	printf("%s %d %d\n", a.name, a.kor, a.eng);
	printf("%s %d %d\n", b.name, b.kor, b.eng);
	printf("%s %d %d\n", sum.name, sum.kor, sum.eng);
	
	return 0; 
}

