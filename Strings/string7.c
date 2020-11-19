/* Printing the initials of a name:
 * eg. :- Shankar Dayal Sharma
 * Output :
 *     S. D. S.
 */
#include <stdio.h>
#include <string.h>

int main() {
    char str[100]=" ", name[100];
    printf("Enter a name: ");
    scanf("%[^\n]%*c", name);
    // strcat() function concatenates the first parameter
    strcat(str, name);// with the second parameter and stores it into 1st parameter.
    printf("Output : ");
    for (int i=0; i < (int)strlen(str); i++) {
        if (str[i] == ' ' && str[i+1] != ' ')
            printf("%c. ", str[i+1]);
    }
    return(0);
}
