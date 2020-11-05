// 1,4,9,16,........n terms
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        printf("%d, ", i*i);
    return(0);
}
