/*
U.ANANDHAKUMAR
EC21B1087
SORTING
*/
#include  <stdio.h>
int main()
{
    int i,j,n,temp;//n=number of times,temp=temporary number storage, i,j=indexing variables
    printf("enter the number of elements:");//n=input the number of elements in array
    scanf("%d",&n);
    if(n<=0)
    {
        printf("invalid input");
    }
    else
    {
        int a[n];
        for(i=0;i<n;i++)//forming the array of integers
        {
            printf("enter the %d number:",i+1);
            scanf("%d",&a[i]);
        }
        for (i=0;i<n;i++)//sorting the elements
        {
            temp=a[i];
            j=i-1;
            while(j>=0&&a[j]>temp)
            {
                a[j+1]=a[j];
                j--;
            }
            a[j+1]=temp;
        }
        for(i=0;i<n;i++)//printing the elements in sorted array
        {
            printf("%d\n",a[i]);
        }
        return 0;
     }
}
