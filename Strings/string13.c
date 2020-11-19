// Print the length of each word
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);
    // strcat() functions concatenates the first parameter
    strcat(str, " ");// with the second parameter and stores it into 1st parameter.
    int p=0;
    for (int i=0; i < (int)strlen(str); i++) {
        if (str[i] == ' ') {
            int c=0;
            printf("Length of \"");
            for(int j=p; j<i; j++) {
                printf("%c", str[j]);
                c++;
            }
            printf("\" is: %d\n", c);
            p=i+1;
        }
    }
    return(0);
}
