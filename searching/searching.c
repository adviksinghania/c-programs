/*

Program:
Implementation of searching algorithms

1. Linear search
2. Binary Search
3. Interpolation search
4. Jump search
5. Median search


Author: Dr.P.Raghu Vamsi, JIIT, Noida.
E-mail: prvonline@yahoo.co.in

View the video for Theory and Code explanation at
1. Linear search
2. Binary Search https://youtu.be/QZ8Z01b4Qp8
3. Interpolation search https://youtu.be/PvTSqw5CjvM
4. Jump search https://youtu.be/iWq8okEcQhI

*/

#include<stdio.h>
#include<math.h>

void linear_search(int a[], int n, int key) {
    int flag = 0;
    for(int i=0; i< n; i++) {
        if(a[i] == key) {
            printf("The key %d was found at index %d \n", key, i);
            flag = 1;
            break;
        } else continue;
    }
    if(flag == 0) printf("The key %d is not found in the list \n", key);
}

void binary_search(int a[], int low, int high, int key) {
    int mid = (low + high)/2;

    if(key < a[mid]) {
        binary_search(a, low, mid, key );
    } else if(key > a[mid]) {
        binary_search(a, mid, high, key);
    } else if (key == a[mid]) {
        printf("Key %d found at index %d \n", key, mid);
        return;
    }
}

void swap(int *a,int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
    return;
}

void quick_sort(int a[],int low,int high) {
    if(low < high) {
        // pi is a partition index
        int pi = partition(a, low, high);

        quick_sort(a, low, pi-1);
        quick_sort(a, pi+1, high);
    }
}

int partition(int a[],int low, int high) {
    int pivot = a[high];
    int i = (low - 1);
    for(int j=low; j<=high-1; j++) {
        // if the current element is less than
        // or equal to pivot
        if(a[j] <= pivot) {
            i++;
            swap(&a[i],&a[j]);
        }
    }
    swap(&a[i+1],&a[high]);
    return (i+1);
}

void display(int a[], int n) {
    printf("\n");
    for(int i=0; i< n; i++)
        printf("%d ", a[i]);
}

void interpolation_search(int a[], int low, int high, int key) {
    int mid = low + (high-low) * ((key-a[low])/(a[high]-a[low]));

    if(key < a[mid]) {
        interpolation_search(a, low, mid-1, key);
    } else if(key > a[mid]) {
        interpolation_search(a, mid+1, high, key);
    } else if (key == a[mid]) {
        printf("Key %d was found at index %d \n", key, mid);
        return;
    }
}

// Complexity of jump search is O(sqrt(n))
void jump_search(int a[], int low, int high, int key, int n) {
    int step = sqrt(n);
    for(int i=0; i<step; i++) {
        if(key < a[step])
            high = step - 1;
        else
            low = step + 1;
    }
    for(int i=low; i<high; i++) {
        if(a[i] == key) {
            printf("The key %d found at index %d", key, i);
            break;
        }
    }
}

int median_search(int a[],int l, int r, int k) {
    int ind = r-l+1;
    // pick a random number
    int index = rand() % ind;
    //printf("Index: %d \n", index);
    int i, j=0, m=0, n=0;
    int s1[10],s2[10],s3[10];

    for(i=0; i<=r; i++) {
        if(a[i] < a[index]) {
            s1[j] = a[i];
            j++;
        } else if(a[i] == a[index]) {
            s2[m] = a[i];
            m++;
        } else {
            s3[n] = a[i];
            n++;
        }
    }
    if(j >= k)
        median_search(s1,0,j-1,k);
    else if((j+m) >= k)
        return a[index];
    else
        median_search(s3,0,n-1,k-(j+m));
}


void main() {
    int a[] = {10, 15, 4, 8, 9, 3, 5, 11, 321, 43, 47, 55, 75, 60};
    int size = sizeof(a)/sizeof(a[0]);

    //printf("\n");
    //inear_search(a, size, 75);

    //quick_sort(a,0,size-1);

    //printf("\n");
    //display(a, size);

    //printf("\n");
    //binary_search(a, 0, size-1, 75);

    //printf("\n");
    //interpolation_search(a, 0, size-1, 75);

    //printf("\n");
    //jump_search(a, 0, size, 75, size);

    printf("\n");
    int k = 4; // searching for k=4th median
    int med = median_search(a,0,size-1,4);
    printf("The %dth median is %d \n",k, med);
}
