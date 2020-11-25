//Print the number of vowels and consonants in each word
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);
    // strcat() functions concatenates the first parameter
    strcat(str, " ");// with the second parameter and stores it into 1st parameter.
    int p=0;
    printf("Output:\n\n");
    for (int i=0; i < (int)strlen(str); i++) {
        if (str[i] == ' ') {
            int vow=0, cons=0;
            for(int j=p; j<i; j++) {
                if((str[j] >= 'A' && str[j] <= 'Z') || (str[j] >= 'a' && str[j] <= 'z')) {
                    if (str[j] == 'a' || str[j] == 'e' || str[j] == 'i' || str[j] == 'o' || str[j] == 'u' || str[j] == 'A' || str[j] == 'E' || str[j] == 'I' || str[j] == 'O' || str[j] == 'U')
                        vow++;
                    else
                        cons++;
                    printf("%c", str[j]);
                }
            }
            printf(":\nNumber of vowels: %d\n", vow);
            printf("Number of consonants: %d\n\n", cons);
            p=i+1;
        }
    }
    return(0);
}
