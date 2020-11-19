//strlen() function - calculates length of a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);
    printf("Length of the string: %d\n", strlen(str));
    return(0);
}
