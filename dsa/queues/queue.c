#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
    int size;
    int front;
    int* arr;
    int rear;
} Queue;

Queue* create(Queue* q) {
    int n;
    printf("Enter size of the queue: ");
    scanf("%d", &n);
    q->size = n;
    q->arr = (int*)calloc(n, sizeof(int));
    q->front = -1;
    q->rear = -1;
    printf("Queue created.\n");
    return(q);
}

bool isFull(Queue* q) {
    return(q->rear == q->size - 1);
}

bool isEmpty(Queue* q) {
    return(q->front == -1 && q->rear == -1);
}

Queue* enqueue(Queue* q, int val) {
    if (isFull(q))
        printf("Queue Overflow.\n");
    else if (isEmpty(q)) {
        q->front = 0;
        q->rear = 0;
        q->arr[q->rear] = val;
    }
    else {
        q->rear++;
        q->arr[q->rear] = val;
    }

    return(q);
}

Queue* dequeue(Queue* q) {
    if (isEmpty(q))
        printf("Queue Underflow.\n");
    else {
        printf("Element deleted: %d\n", q->arr[q->front]);
        if (q->front == q->rear) {
            q->front = -1;
            q->rear = -1;
        }
        else
            q->front++;
    }

    return(q);
}

void peek(Queue* q) {
    if (!isEmpty(q))
        printf("First Element: %d\n", q->arr[q->front]);
    else
        printf("Queue is empty.\n");
}

void display(Queue* q) {
    if (isEmpty(q))
        printf("Queue is empty.\n");
    else {
        printf("Queue:\n");
        for (int i = q->front; i <= q->rear; i++)
            printf("%d\n", q->arr[i]);
    }
}

int instructions() {
    int ch;
    printf("\n1.) Insert an element.\n");
    printf("2.) Delete an element.\n");
    printf("3.) Peek.\n");
    printf("4.) Display the Queue.\n");
    printf("5.) Check if Queue is empty.\n");
    printf("6.) Check if Queue is full.\n");
    printf("7.) Exit.\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    return(ch);
}

int main() {
    Queue* queue = (Queue*)malloc(sizeof(Queue));
    queue = create(queue);
    int ch = -1, val;
    while (ch != 7) {
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
            isFull(queue) ? printf("Queue is full.\n") : printf("Queue is not full.\n");
            break;

        case 7:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice.\n");
        }
    }

    return(0);
}
