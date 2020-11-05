/**
 * The numeroligical total of a number is the sum of its digits. If the sum exceeds a single
   digit, its digits are added. This process is repeated till the sum is obtained in a single
   digit. An example is Shown below :-
 * Number : 919
 * Sum of digits : 19
 * Sum of digits : 10
 * Sum of digits : 1
 */
#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int s=0;
    while (n!=0) {
        int a=n%10;
        s+=a;
        n/=10;
    }
    while (s>9) {
        int m=s;
        s=0;
        while (m!=0) {
            int a=m%10;
            s+=a;
            m/=10;
        }
    }
    printf("The numeroligical sum is: %d", s);
    return(0);
}
