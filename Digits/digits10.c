//Sum of factorial of digits of a number
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int s=0;
    while (n!=0) {
        int m=1, a=n%10;
        for(int i=1;i<=a;i++)
            m*=i;
        s+=m;
        n/=10;
    }
    printf("The sum is: %d\n", s);
    return(0);
}
