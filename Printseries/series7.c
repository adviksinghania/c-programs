// 1,8,27,64,........n terms
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
        printf("%d, ", i*i*i);
    return(0);
}
