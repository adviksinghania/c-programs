// 1,-2,3,-4,......., n
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n;
    scanf("%d", &n);
    for (int i=1; i<=n; i++)
        if (i%2 == 0)
            printf("%d, ", -i);
        else
            printf("%d, ", i);
    return(0);
}
