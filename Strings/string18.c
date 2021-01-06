//Swap first and last letter of each word
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);
    // strcat() functions concatenates the first parameter
    strcat(str, " ");// with the second parameter and stores it into 1st parameter.
    int p=0;
    printf("Output:\n");
    for (int i=0; i < (int)strlen(str); i++) {
        if (str[i] == ' ') {
            printf("%c", str[i-1]);
            for(int j=p+1; j<i-1; j++)
                printf("%c", str[j]);
            printf("%c ", str[p]);
            p=i+1;
        }
    }
    return(0);
}
