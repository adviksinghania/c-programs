// 1-3+5-7----n
#include <stdio.h>

int main() {
    printf("Enter a number: ");
    int n,s=0;
    scanf("%d", &n);
    for (int i=1, a=1; i<=n; i+=2, a++)
        if (a%2 == 0)
            s-=i;
        else
            s+=i;
    printf("The sum is: %d\n", s);
    return(0);
}
