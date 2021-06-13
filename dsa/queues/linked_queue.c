#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node* next;
} Node;

typedef struct {
    Node* front;
    Node* rear;
} Queue;

bool isEmpty(Queue* q) {
    return(q->front == NULL);
}

Queue* enqueue(Queue* q, int val) {
    Node* ptr = (Node*)malloc(sizeof(Node));
    if (ptr == NULL) {
        printf("Memory Overflow.\n");
        exit(0);
    }

    ptr->data = val;
    ptr->next = NULL;
    if (q->front == NULL) {
        q->front = ptr;
        q->rear = ptr;
    }
    else {
        q->rear->next = ptr;
        q->rear = ptr;
    }

    return(q);
}

Queue* dequeue(Queue* q) {
    if (isEmpty(q))
        printf("Queue Underflow.\n");
    else {
        Node* ptr = q->front;
        q->front = q->front->next;
        printf("Element deleted: %d\n", ptr->data);
        free(ptr);
    }

    return(q);
}

void peek(Queue* q) {
    if (isEmpty(q))
        printf("Queue is empty.\n");
    else
        printf("First element: %d\n", q->front->data);
}

void display(Queue* q) {
    if (isEmpty(q))
        printf("Queue is empty.\n");
    else {
        Node* ptr = q->front;
        printf("Queue:\n");
        while (ptr != q->rear) {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }

        printf("%d\n", ptr->data);
    }
}

int instructions() {
    int ch;
    printf("\n1.) Insert an element.\n");
    printf("2.) Delete an element.\n");
    printf("3.) Peek.\n");
    printf("4.) Display the Queue.\n");
    printf("5.) Check if Queue is empty.\n");
    printf("6.) Exit.\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    return(ch);
}

int main() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue->front = queue->rear = NULL;

    int ch = -1, val;
    while (ch != 6) {
        ch = instructions();

        switch (ch)
        {
        case 1:
            printf("Enter the element to insert: ");
            scanf("%d", &val);
            queue = enqueue(queue, val);
            break;

        case 2:
            queue = dequeue(queue);
            break;

        case 3:
            peek(queue);
            break;

        case 4:
            display(queue);
            break;

        case 5:
            isEmpty(queue) ? printf("Queue is empty.\n") : printf("Queue is not empty.\n");
            break;

        case 6:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice.\n");
        }
    }
    return(0);
}
