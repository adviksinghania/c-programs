//strcpy() function - copies one string to another
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    strcpy(str, "Hello World!");
    printf("Coppied string: %s\n", str);
    return(0);
}
