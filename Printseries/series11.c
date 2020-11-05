// 1,-3,5,-7,......., n
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    for (int i=1, a=1; i<=n; i+=2, a++)
        if (a%2 == 0)
            printf("%d, ", -i);
        else
            printf("%d, ", i);
    return(0);
}
