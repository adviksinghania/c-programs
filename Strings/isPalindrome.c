#include <stdio.h>
#include <string.h>

int isPalindrome(char* A){
    // front pointer
    int i = 0;

    // back pointer
    int j = strlen(A) - 1;

    // loop until the pointers meet and check if the characters are equal
    while(i < j){
        if(A[i] != A[j]){
            // if the characters are not equal, return false
            return 0;
        }

        i++;
        j--;
    }

    // if the characters are equal, return true
    return 1;
}

int main(){
    // declare a string
    char A[] = "abba";
    
    // call function
    int result = isPalindrome(A);
    if(result == 1){
        printf("YES\n");
    } else{
        printf("NO\n");
    }

    return 0;
}