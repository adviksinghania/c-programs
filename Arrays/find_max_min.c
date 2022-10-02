#include<stdio.h>

int main(){
    // declare an array
    int arr[10] = {90, 43, 21, 23, 4, 56, 75, 38, 91, 120};
    
    // declare variables to store max and min
    int max = arr[0];
    int min = arr[0];

    // loop through the array
    for(int i = 0; i < 10; i++){
        
        // check if current element is greater than max
        if(arr[i] > max){
            max = arr[i];
        }

        // check if current element is less than min
        if(arr[i] < min){
            min = arr[i];
        }
    }

    // print the max and min
    printf("Max: %d\n", max);
    printf("Min: %d\n", min);
    return 0;
}