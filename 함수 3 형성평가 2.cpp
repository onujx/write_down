#include <stdio.h>
void fn(int n) {
        if (n == 1 || n == 2) {
               printf("%d ", n);
               return;
        }
        else {
               fn(n - 2);
               printf("%d ", n);
        }
}
int main() {
        int n;
        scanf("%d", &n);
        fn(n);
        return 0;
}
