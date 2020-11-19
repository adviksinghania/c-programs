//Print the words starting with vowels
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
            if (str[p] == 'a' || str[p] == 'e' || str[p] == 'i' || str[p] == 'o' || str[p] == 'u' || str[p] == 'A' || str[p] == 'E' || str[p] == 'I' || str[p] == 'O' || str[p] == 'U') {
                char word[100]="";
                for(int j=p; j<i; j++)
                    strncat(word, &str[j], 1);
                printf("%s, ", word);
            }
            p=i+1;
        }
    }
    return(0);
}
