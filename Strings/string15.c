// Print the smallest word in a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], min[100]="";
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);
    // strcat() functions concatenates the first parameter
    strcat(str, " ");// with the second parameter and stores it into 1st parameter.
    int p=0, len=strlen(str);
    for (int i=0; i < (int)strlen(str); i++) {
        if (str[i] == ' ') {
            int c=0;
            char word[100]="";
            for(int j=p; j<i; j++) {
                strncat(word, &str[j], 1);
                c++;
            }
            p=i+1;
            if (c < len) {
                strcpy(min, word);
                len = strlen(min);
            }
        }
    }
    printf("Smallest word: %s\n", min);
    return(0);
}
