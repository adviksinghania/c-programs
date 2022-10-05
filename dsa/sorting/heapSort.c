#include<stdio.h>
#include<stdlib.h>

void swap(int *a, int *b){
    int tmp= *a;
    *a= *b;
    *b= tmp;
}

void heapify(int arr[],int n,int i){
    int largest= i;
    int left= 2*i+1,right=left+1;

    if(left < n && arr[left]>arr[largest])
        largest = left;
    if(right < n && arr[right]>arr[largest])
        largest = right;

    if(largest != i){
        swap(&arr[i], &arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n){
    int i;
    for (i = n/2 - 1; i >= 0; i--)
        heapify(arr, n, i);
    // Heap sort
    for (i = n - 1; i >= 0; i--){
        swap(&arr[0], &arr[i]);
        heapify(arr, i, 0);
    }
}

void printArray(int arr[] , int n){
    int i;
    printf("The array is : \n");
    for(i = 0;i < n;i++)
        printf("%d\t",arr[i]);
    printf("\n");
}

void main(){
    int arr[] = {1,3,6,4,8,2,9,5};
    printf("Before Sorting, ");
    printArray(arr, 8);
    
    heapSort(arr, 8);

    printf("After Sorting, ");
    printArray(arr, 8);
}