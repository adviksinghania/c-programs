//Counting the number of vowels
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);
    int v=0;
    for (int i=0; i < (int)strlen(str); i++) {
        switch (str[i]) {
            case 'a': case 'A':
            case 'e': case 'E':
            case 'i': case 'I':
            case 'o': case 'O':
            case 'u': case 'U':
                v++;
                break;
            default:
                break;
        }

    }
    printf("No. of vowels: %d\n",v);
    return(0);
}
