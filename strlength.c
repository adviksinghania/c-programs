// Length of Input string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100000];
    printf("Enter String:\n");
    scanf("%[^\n]", str);
    printf("\nLength: %d\n", strlen(str));
    return(0);
}
