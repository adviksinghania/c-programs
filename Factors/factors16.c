//Print all the tables between 2 numbers
#include <stdio.h>

int main() {
    printf("Enter two numbers:\n");
    int a, b;
    scanf("%d %d", &a, &b);
    printf("Multiplication tables :\n");
    if (a > b) {
        for (int n=b; n<=a; n++) {
            for (int i=1; i<=10; i++)
                printf("%d X %d = %d\n", n, i, n*i);
            printf("\n");
        }
    } else if (a < b) {
        for (int n=a; n<=b; n++) {
            for (int i = 1; i<=10; i++)
                printf("%d X %d = %d\n", n, i, n*i);
            printf("\n");
        }
    } else
        printf("None\n");
    return(0);
}
