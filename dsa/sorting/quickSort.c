#include<stdio.h>
#include<stdlib.h>
int x=1;
void swap(int *a, int *b){
    int tmp =*a;
    *a = *b;
    *b = tmp;
}
void printArray(int arr[], int len){
    int i;
    for(i=0;i<len;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}
int partition(int arr[],int low, int high){
    int pivot = arr[high];
    int i=low,j;
    for(j=low;j<high;j++){
        if(arr[j]<pivot)
            swap(&arr[i++],&arr[j]);
    }
    swap(&arr[i],&arr[high]);
    return i;
}
void quickSort(int arr[], int low, int high){
    if(low<high){
        int pivot = partition(arr,low,high);

        printf("\nPass %d :\t", x++);
        printArray(arr,10);

        quickSort(arr,low,pivot-1);
        quickSort(arr,pivot+1,high);
    }
}

void main(){
    int arr[] = {2,3,1,5,4,8,6,0,9,7};
    printf("Original array : ");
    printArray(arr,10);

    quickSort(arr,0,9);

    printf("\n\nSorted array : ");
    printArray(arr, 10);
}