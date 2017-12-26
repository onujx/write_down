#include <stdio.h>
#include <string.h>
#include <math.h>

struct data
{
	int  height;
	double weight;
} uid[2];

void input()
{
	int i;
	
	for (i = 0; i < 2; i++) {
		scanf("%d %lf", &uid[i].height, &uid[i].weight);
	}
}

void normal()
{
	int i = 0;
	
	uid[i].height = ((uid[i].height + uid[i+1].height) / 2) + 5;
	uid[i].weight = ((uid[i].weight + uid[i+1].weight) / 2) - 4.5; 
	}
	
	void output()
	{	
	int i = 0;
	
		printf("height : %dcm\nweight : %.1lfkg\n", uid[i].height, uid[i].weight);
			}
			
	int main()
	{
		input();
		normal();
		output();
		
		return 0;
	}

