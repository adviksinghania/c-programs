//Tribonacci series :- 0,1,2,3,6,11,20,37,---- n terms
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int a=0, b=1, c=2;
    printf("%d, ", a);
    printf("%d, ", b);
    printf("%d, ", c);
    for (int i=4; i<=n; i++) {
        int d=a+b+c;
        a=b; b=c; c=d;
        printf("%d, ", d);
    }
    return(0);
}
