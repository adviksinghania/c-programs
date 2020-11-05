//Fibonacci series :- 0,1,1,2,3,5,8,13,----n terms
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a=0, b=1;
    printf("%d, ", a);
    printf("%d, ", b);
    for (int i=3; i<=n; i++) {
        int c=a+b;
        a=b;
        b=c;
        printf("%d, ", c);
    }
    return(0);
}
