// 1,3,5,7,9,........n
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    for(int i=1; i<=n; i+=2)
        printf("%d, ", i);
    return(0);
}
