#include<stdio.h>
#include<stdlib.h>
#define range 9

void printArray(int *arr, int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d\t", *(arr + i));
    }
    printf("\n");
}

void countSort(int arr[],int len){
    int count[range+1]={0};
    int output[len];
    int i;

    for(i=0;i<len;i++){
        count[arr[i]]++;
    }
    for(i=1;i<=range;i++){
        count[i]+=count[i-1];
    }
    for(i=0;i<len;i++){
            output[count[arr[i]]-1]=arr[i];
            count[arr[i]]--;
    }
    for (i = 0; i < len; i++)
    {
        arr[i]=output[i];
    }
}

void main(){
    int arr[]={1,6,3,4,9,0,8,3,4};
    printArray(arr,9);
    countSort(arr,9);
    printArray(arr, 9);
}