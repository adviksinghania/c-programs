//Composite number or not
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n, c=0;
    scanf("%d", &n);
    for (int i = 1; i<=n; i++)
        if (n%i == 0)
            c++;
    if (c > 2)
        printf("Composite Number.\n");
    else
        printf("Not a Composite Number.\n");
    return(0);
}
