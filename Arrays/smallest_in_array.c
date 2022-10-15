#include<stdio.h>
int main() 
{
  int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 10};
  int n = sizeof(arr)/sizeof(arr[0]); 
  printf("Smallest missing element is %d",findFirstMissing(arr, 0, n-1));
  return 0;
}
int findFirstMissing(int array[], int start, int end)
{ 
  if (start  > end)
  { 
    return end + 1;
  } 
  if (start != array[start])
  {
    return start;
  }
  int mid = (start + end) / 2; 
  if (array[mid] == mid) 
  {
    return findFirstMissing(array, mid+1, end);
  }
  return findFirstMissing(array, start, mid);
}
