#include <stdio.h>

int main()
{
    int n,i;
    char a[100][100];
    fscanf(stdin,"%d\n",&n);
    
    fflush(stdin);
    for(i=0;i<n;i++){
        fgets(a[i],101,stdin);
    }
    fflush(stdout);
    for(i=n-1;i>=0;i--){
        fputs(a[i],stdout);
    }
    return 0;
}
