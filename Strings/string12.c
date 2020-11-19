/* Printing the initials of a name:
 * e.g. : Shankar Dayal Sharma
 * Output : raknahS layaD amrahS
 */
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    printf("Enter a name: ");
    scanf("%[^\n]%*c", name);
    // strcat() functions concatenates the first parameter
    strcat(name, " ");// with the second parameter and stores it into 1st parameter.
    printf("Output : ");
    int p=0;
    for (int i=0; i < (int)strlen(name); i++) {
        if (name[i] == ' ') {
            for(int j=i-1; j>=p; j--)
                printf("%c", name[j]);
            printf(" ");
            p=i+1;
        }
    }
    return(0);
}
