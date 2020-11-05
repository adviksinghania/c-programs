// 2,5,10,17,........n terms
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        printf("%d, ", i*i+1);
    return(0);
}
