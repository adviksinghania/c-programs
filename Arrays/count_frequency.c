#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define SIZE 200

struct DataItem
{
    int data;
    int key;
};

struct DataItem *hashArray[SIZE];
struct DataItem *dummyItem;
struct DataItem *item;

int hashCode(int key)
{
    return key % SIZE;
}

struct DataItem *search(int key)
{
    // get the hash
    int hashIndex = hashCode(key);

    // move in array until an empty
    while (hashArray[hashIndex] != NULL)
    {

        if (hashArray[hashIndex]->key == key)
            return hashArray[hashIndex];

        // go to next cell
        ++hashIndex;

        // wrap around the table
        hashIndex %= SIZE;
    }

    return NULL;
}

void insert(int key, int data)
{

    struct DataItem *item = (struct DataItem *)malloc(sizeof(struct DataItem));
    item->data = data;
    item->key = key;

    // get the hash
    int hashIndex = hashCode(key);

    // move in array until an empty or deleted cell
    while (hashArray[hashIndex] != NULL && hashArray[hashIndex]->key != -1)
    {
        // go to next cell
        ++hashIndex;

        // wrap around the table
        hashIndex %= SIZE;
    }
    hashArray[hashIndex] = item;
}

void display()
{
    int i = 0;

    for (i = 0; i < SIZE; i++)
    {
        if (hashArray[i] != NULL) printf(" %d occurs %d times\n", hashArray[i]->key, hashArray[i]->data);
    }

    printf("\n");
}

int main()
{
    dummyItem = (struct DataItem *)malloc(sizeof(struct DataItem));
    dummyItem->data = -1;
    dummyItem->key = -1;

    // declare an array of 20 integers and initialize
    int arr[10] = {1, 12, 43, 1, 1, 7, 1, 29, 29, 59};

    // count the number of times each integer appears in the array
    for (int i = 0; i < 10; i++)
    {
        item = search(arr[i]);
        if (item == NULL)
            insert(arr[i], 1);
        else
            item->data = item->data + 1;
    }

    display();
}
