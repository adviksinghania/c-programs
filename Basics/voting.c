//Eligible for voting or Not
#include <stdio.h>

int main() {
    printf("Enter year of voting: ");
    int y;
    scanf("%d", &y);
    printf("Enter age as of January 1, %d: ", y);
    int age;
    scanf("%d", &age);
    if (age>=18)
        printf("\nEligible for voting.\n");
    else
        printf("\nNot eligible for voting.\n");
    return(0);
}
