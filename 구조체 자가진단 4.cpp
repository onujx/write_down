#include <stdio.h>
#include <string.h>

struct point
{
	double x, y, z;
} p1, p2, p3, p4;



void p_input(struct point &p)
{
	scanf("%lf %lf %lf", &p.x, &p.y, &p.z);
}

struct point center(struct point a, struct point b, struct point c)
{
	struct point d;
	d.x = (a.x + b.x + c.x) / 3;
	d.y = (a.y + b.y + c.y) / 3;

	return d;
}

void p_output(struct point p)
{
	printf("(%.1f, %.1f)", p.x, p.y);
}

int main()
{
	p_input(p1);
	p_input(p2);
	p_input(p3);
	p4 = center(p1, p2, p3);
	p_output(p4);
	
	return 0; 
}


/// why 
