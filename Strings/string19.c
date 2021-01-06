//Calculate frequency of input word in a string
#include <stdio.h>
#include <string.h>

int main() {
    char str[100], word[50];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);
    printf("Enter a word: ");
    scanf("%[^\n]%*c", word);
    // strcat() functions concatenates the first parameter
    strcat(str, " ");// with the second parameter and stores it into 1st parameter.
    int p=0, f=0;
    for (int i=0; i < (int)strlen(str); i++) {
        if (str[i] == ' ') {
            char tmp[50]="";
            for(int j=p; j<i; j++)
                strncat(tmp, &str[j], 1);
            if (strcmp(tmp, word) == 0)
                f++;
            p=i+1;
        }
    }
    printf("Frequency: %d", f);
    return(0);
}
