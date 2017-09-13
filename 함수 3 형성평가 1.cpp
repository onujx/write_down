// Àç±ÍÇÔ¼ö  (Recursion)

#include <stdio.h>

int fuc(int n)
{

    if(n % 3 ==0 && n % 5 ==0) {
	
    for(int cnt = 1; cnt < n; cnt+2){
    	printf("%d ", cnt);
	}
}
    
    
    if(n % 2 == 0){
	
    for(int cnt = 2; cnt < n; cnt+2){
    	printf("%d", cnt);
	}
}
}
int main()
{
    int n;
    scanf("%d",&n);
    
    fuc(n);
    return 0;
}

