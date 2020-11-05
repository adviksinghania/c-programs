//Print the Maximum and Minimum digits of a number
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int max=0, min=9;
    while (n!=0) {
        int a=n%10;
        if (a>max)
            max=a;
        if (a<min)
            min=a;
        n/=10;
    }
    printf("Maximum digit: %d\n", max);
    printf("Minimum digit: %d\n", min);
    return(0);
}
