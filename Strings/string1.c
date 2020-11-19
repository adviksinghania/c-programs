/*Taking string as an input:
Here, [] is the scanset character. ^\n tells to take input until
newline doesn’t get encountered. Then, with this %*c, it reads
newline character and here used * indicates that this newline character
is discarded.
*/
#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%[^\n]%*c", str);
    printf("Input string: %s\n", str);
    return(0);
}
