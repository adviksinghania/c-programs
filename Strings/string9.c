/* Printing the initials of a name:
 * e.g. : Shankar Dayal Sharma
 * Output : Sharma S. D.
 */
#include <stdio.h>
#include <string.h>

int main() {
    char str[100]=" ", name[100];
    printf("Enter a name: ");
    scanf("%[^\n]%*c", name);
    // strcat() functions concatenates the first parameter
    strcat(str, name);// with the second parameter and stores it into 1st parameter.
    printf("Output : ");
    int l=strlen(str);
    for (int i=l-1; i >= 0; i--) {
        if (str[i] == ' ') {
            for(int k=i+1; k<l; k++)
                printf("%c", str[k]);
            for (int j=0; j<i; j++)
                if (str[j] == ' ' && str[j+1] != ' ')
                    printf(" %c.", str[j+1]);
            break;
        }
    }
    return(0);
}
