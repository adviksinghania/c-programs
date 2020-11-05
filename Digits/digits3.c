//Sum of Odd and Even digits
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int ev=0, od=0;
    while (n!=0) {
        int a=n%10;
        if (a%2==0)
            ev+=a;
        else
            od+=a;
        n/=10;
    }
    printf("The sum of even digits is: %d\n", ev);
    printf("The sum of odd digits is: %d\n", od);
    return(0);
}
