#include <iostream>
using namespace std;

void printArray(int* A, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout<<A[i]<<" ";
    }
    cout<<endl;
}

int maximum(int A[], int n)
{
    int max = A[0];
    for (int i = 0; i < n; i++)
    {
        if (max < A[i])
        {
            max = A[i];
        }
    }
    return max;
}

void countSort(int * A, int n)
{
    int max = maximum(A, n);
    int* count = (int *) malloc((max+1)*sizeof(int));
    for (int i = 0; i < max+1; i++)
    {
        count[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        count[A[i]] = count[A[i]] + 1;
    }
    int i=0,j=0;
    while(i<max)
    {
        if(count[i]>0)
        {
            A[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else
        {
            i++;
        }
    }
}

int main()
{
    int A[] = {9, 1, 4, 14, 4, 15, 1, 6};
    printArray(A, sizeof(A)/sizeof(int));
    countSort(A, sizeof(A)/sizeof(int));
    printArray(A, sizeof(A)/sizeof(int));
    return 0;
}
