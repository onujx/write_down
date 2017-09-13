#include <stdio.h>
#include <stdlib.h> 
int re(int num)
{
    if(num==0) return 1;
    int nmg=1;
    nmg=num%10;
    if(nmg==0) nmg=1;
    num=num/10;
    return nmg*re(num);
}
int main(void)
{
    int num1,num2,num3,num4;
    scanf("%d",&num1);
    scanf("%d",&num2);
    
	scanf("%d",&num3);     
    num4=num1*num2*num3;
    printf("%d\n",re(num4));
    return 0;
}
