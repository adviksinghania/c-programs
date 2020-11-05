//LCM of 2 numbers
#include <stdio.h>

int main() {
    printf("Enter two numbers:\n");
    int a, b, lcm=0;
    scanf("%d %d", &a, &b);
    for (int i=1; i<=(a*b); i++)
        if ((i%a == 0) && (i%b == 0)) {
            lcm=i;
            break;
        }
    printf("LCM of %d and %d is: %d\n", a, b, lcm);
    return(0);
}
