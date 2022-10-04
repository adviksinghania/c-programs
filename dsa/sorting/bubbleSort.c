#include<stdio.h>
#include<stdlib.h>
#include<math.h>
void swap(int* a,int* b){
    *a=*a+*b;
    *b=*a-*b;
    *a=*a-*b;
}
void printArray(int *arr,int len){
    int i;
    for(i=0;i<len;i++){
        printf("%d\t",*(arr+i));
    }
    printf("\n");
}
void bubbleSort(int *arr, int len){
    int i,j;
    for(i=0;i<len;i++){
        for(j=0;j<len-i-1;j++){
            if(*(arr+j)>*(arr+j+1))
                swap((arr+j),(arr+j+1));
        }
        printf("Pass %d :\n",i+1);
        printArray(arr,len);
    }

}

int main(){
    int len;
    int* arr;
    printf("Enter size of the array : ");
    scanf("%d",&len);
    arr=(int *)malloc(len*sizeof(int));
    printf("Enter the Elements : ");
    int i;
    for(i=0;i<len;i++)
        scanf("%d",(arr+i));
    printf("\nThe unsorted Array is :\n");
    printArray(arr, len);
    printf("\n\n-------------BUBBLE SORT BEGINS----------------\n\n");
    bubbleSort(arr,len);
    printf("\nThe sorted Array is :\n");
    printArray(arr,len);

    return 0;
}