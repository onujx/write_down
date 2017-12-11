#include <stdio.h>
#include <string.h>
int main()
{
    char a[5][100];
    char b,c[20];
    int i,su=0; 
    for(i=0;i<5;i++){
        scanf("%s",a[i]);
    }
    scanf(" %c %s",&b,c);
    for(i=0;i<5;i++){
        if(strchr(a[i],b)!=0 || strstr(a[i],c)!=0){
            printf("%s\n",a[i]);
            su++;
        }
    }
    if(su==0)
	{printf("none");}
    return 0;
}
