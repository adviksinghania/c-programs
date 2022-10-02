#include<stdio.h>

int main(){
    // declare an array 
    int arr[] = {1, 5, 3, 4, 5, 6, 7, 8, 5, 5, 1, 5, 1, 5, 5, 5, 5};
    // declare a variable to store the length of the array
    int n = sizeof(arr)/sizeof(arr[0]);

    // find the frequency of each element
    for(int i = 0; i < n; i++){
        int count = 1;
        for(int j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                count++;
                arr[j] = -1;
            }
        }
        if(arr[i] != -1){
            printf("%d occurs %d times\n", arr[i], count);
        }
    }
    
    return 0;
}