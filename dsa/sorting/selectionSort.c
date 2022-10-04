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
void selectionSort(int *arr, int len)
{
    int i, j;
    for (i = 0; i < len-1; i++)
    {
        int min=i;
        for(j=i+1;j<len;j++){
            if(*(arr+min)>*(arr+j))
                min=j;
        }
        if(min!=i)
            swap((arr+i),(arr+min));
        printf("Pass %d :\n", i + 1);
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
    printf("\n\n-------------SELECTION SORT BEGINS----------------\n\n");
    selectionSort(arr, len);
    printf("\nThe sorted Array is :\n");
    printArray(arr, len);

    return 0;
}