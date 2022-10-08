/*
this perticular Lines of 
code will Rotated the inputed
array by the number "N" numbers

*/

#include<stdio.h>

void Print_arr(int arr[], int n);
//To preint the array in the shell

void Rotate(int arr[], int n, int k);
//This takes arr, size of arr, an integer k to Rotate arr

int main()
{
    int arr[1000] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    //The array in ehich we are applincg this perticular code

    Print_arr(arr, 10);

    Rotate(arr, 10, 4);

    Print_arr(arr, 10);


    return 0;
}


//Functions definations

void Rotate(int *arr, int n, int k)
{
    int temp[1000];// a temperory array
    for(int i = 0; i < n; i++)
    {
        
        temp[i] = arr[i];
    }

    for(int i = 0; i < n; i++)
    {
        arr[(i + k) % n] = temp[i];
        
    }

    
}

void Print_arr(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
