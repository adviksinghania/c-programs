#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node
{
    int data;
    struct node *next;
} Node;

// functions to reverse the linked list

// reversing iteratively
Node *reverse_it(Node *head)
{
    Node *prev = NULL; // keeps tracks of the previos node
    Node *curr = head; // keeps track of the current node
    Node *next = NULL; // keeps track of the next node

    while (curr != NULL)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    // Now  prev is the new head node
    return prev;
}

// reversing recursively
void recursiveReverse(Node *head, Node **headRef)
{
    Node *first;
    Node *rest;

    // empty list base case
    if (head == NULL)
    {
        return;
    }

    first = head;
    rest = first->next;

    // base case: the list has only one node
    if (rest == NULL)
    {
        // fix the head pointer here
        *headRef = first;
        return;
    }

    // recursive call
    recursiveReverse(rest, headRef);

    // put the first item at the end of the list
    rest->next = first;
    first->next = NULL;
}

// (reference) to the head pointer
void reverse_rec(Node **head)
{
    recursiveReverse(*head, head);
}

// utility functions
void display(Node *head)
{
    Node *temp = head;
    if (temp == NULL)
        printf("List is empty.\n");
    else
    {
        while (temp->next != NULL)
        {
            printf("%d --> ", temp->data);
            temp = temp->next;
        }

        printf("%d\n", temp->data);
    }
}

Node *insert_beg(Node *head, int val)
{
    Node *new = (Node *)malloc(sizeof(Node));
    if (new == NULL)
    {
        printf("Memory overflow.\n");
        exit(0);
    }

    new->data = val;
    new->next = head;
    head = new;
    return (head);
}

char instructions()
{
    int ch;
    printf("\n1.) Print the linked list.\n");
    printf("2.) Add a node to the beginning of the list.\n");
    printf("3.) Reverse the list iteratively\n");
    printf("4.) Reverse the list recursively\n");
    printf("5.) Exit.\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    return (ch);
}

int main()
{
    Node *root = NULL;
    int ch = -1, val, temp;
    while (ch != 11)
    {
        ch = instructions();

        switch (ch)
        {
        case 1:
            display(root);
            break;

        case 2:
            printf("Enter the data: ");
            scanf("%d", &val);
            root = insert_beg(root, val);
            break;

        case 3:
            printf("Reversing the list iteratively...");
            root = reverse_it(root);
            break;

        case 4:
            printf("Reversing the list recursively...");
            reverse_rec(&root);
            break;

        case 5:
            printf("Exiting...\n");
            exit(0);
            break;

        default:
            printf("Invalid choice.\n");
        }
    }

    return (0);
}
