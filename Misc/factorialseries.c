//Factorial series : 1,2,6,24,120---n terms
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i=1; i<=n; i++) {
        int f=1;
        for(int j=1; j<=i; j++)
            f*=j;
        printf("%d, ", f);
    }
    return(0);
}
