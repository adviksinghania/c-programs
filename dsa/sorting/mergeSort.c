#include <stdio.h>
#include<stdlib.h>
void merge(int arr[],int l,int m,int r){
    int i,j,k;
    int n1=m-l+1,n2=r-m;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
        L[i]=arr[l+i];
    for(j=0;j<n2;j++)
        R[j]=arr[m+1+j];
    i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(L[i]<=R[j])
            arr[k++]=L[i++];
        else
            arr[k++]=R[j++];
    }
    while(i<n1)
        arr[k++]=L[i++];
    while(j<n2)
        arr[k++]=R[j++];
}
void mergesort(int arr[],int l, int r){
    if(l<r){
        int m=l+(r-l)/2;

        mergesort(arr,l,m);
        mergesort(arr,m+1,r);

        merge(arr,l,m,r);
        printArray(arr,0,8);
        printf("\n");
    }
}
void printArray(int arr[],int start,int end){
    int i;
    for(i=start;i<=end;i++){
        printf("%d\t",arr[i]);
    }
}
void main(){
    int len=9;
    int arr[]={5,4,6,3,1,7,2,9,8};
    mergesort(arr,0,8);
    printf("\nThe Sorted Array : \n");
    printArray(arr,0,8);
    printf("\n");
}