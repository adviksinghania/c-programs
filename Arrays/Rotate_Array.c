/*
Program to rotate the input array by "N" times
*/

#include<stdio.h>

void printArr(int arr[], int n);
//To preint the array in the shell

void Rotate(int arr[], int n, int k);
// This takes arr, size of arr, an integer k to rotate the arr

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    // The array in which we are applying this particular code

    printArr(arr, 10);
    rotateArr(arr, 10, 4);
    printArr(arr, 10);
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

void printArr(int arr[], int n) {
    for(int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}
