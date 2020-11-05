// 2,4,6,8,10,........n
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    for(int i=2; i<=n; i+=2)
        printf("%d, ", i);
    return(0);
}
