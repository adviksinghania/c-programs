//Counting the number of uppercase and lowercase letters, digits and spaces in a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);
    int u=0, l=0, d=0, s=0;
    for (int i=0; i < (int)strlen(str); i++) {
        if (str[i] >= 'A' && str[i] <= 'Z')
            u++;
        if (str[i] >= 'a' && str[i] <= 'z')
            l++;
        if (str[i] >= '0' && str[i] <= '9')
            d++;
        if (str[i] == ' ')
            s++;
    }
    printf("No. of uppercase letters: %d\n", u);
    printf("No. of lowercase letters: %d\n", l);
    printf("No. of digits:  %d\n", d);
    printf("No. of spaces: %d\n", s);
    return(0);
}
