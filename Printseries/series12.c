// 1,-5,9,-13,......., n
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    for (int i=1, a=1; i<=n; i+=4, a++)
        if (a%2 == 0)
            printf("%d, ", -i);
        else
            printf("%d, ", i);
    return(0);
}
