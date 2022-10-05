#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
void printArray(int *arr, int len)
{
    int i;
    for (i = 0; i < len; i++)
    {
        printf("%d\t", *(arr + i));
    }
    printf("\n");
}
void insertionSort(int *arr, int len)
{
   int i,j;
   for(i = 1 ; i < len ; i++ ){
    int tmp = *(arr+i);
    for(j = i - 1 ; j >= 0 ; j-- ){
        if(*(arr+j)>tmp){
            *(arr+j+1)=*(arr+j);
        }
        else {
            break;
        }
    }
    *(arr + j + 1) = tmp;
    printf("Pass %d :\n", i );
    printArray(arr, len);
   }
}

int main()
{
    int len;
    int *arr;
    printf("Enter size of the array : ");
    scanf("%d", &len);
    arr = (int *)malloc(len * sizeof(int));
    printf("Enter the Elements : ");
    int i;
    for (i = 0; i < len; i++)
        scanf("%d", (arr + i));
    printf("\nThe unsorted Array is :\n");
    printArray(arr, len);
    printf("\n\n-------------INSERTION SORT BEGINS----------------\n\n");
    insertionSort(arr, len);
    printf("\nThe sorted Array is :\n");
    printArray(arr, len);

    return 0;
}