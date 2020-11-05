// Leap year or not ?
#include <stdio.h>

int main() {
    int y;
    printf("Enter year: ");
    scanf("%d", &y);
    if (y%100==0)
        if (y%400==0)
            printf("\n%d is a leap year.\n", y);
        else
            printf("\n%d is not a leap year.\n", y);
    else if(y%4==0)
        printf("\n%d is a leap year.\n", y);
    else
        printf("\n%d is not a leap year.\n", y);
    return 0;
}
