#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct stack {
    int data;
    struct stack* next;
};

bool isFull(struct stack* t) {
    return(t == NULL);
}

bool isEmpty(struct stack* t) {
    return(t == NULL);
}

struct stack* push(struct stack* t, int val) {
    struct stack* new = (struct stack*)malloc(sizeof(struct stack));
    if (isFull(new)) {
        printf("\nError: Stack Overflow.\n");
        return(-1);
    }
    else {
        new->data = val;
        new->next = t;
        t = new;
        printf("Task Successful.\n");
        return(t);
    }
}

struct stack* pop(struct stack* t) {
    if (isEmpty(t)) {
        printf("\nError: Stack Underflow.\n");
        return(-1);
    }
    else {
        printf("Popped element: %d\n", t->data);
        struct stack* ptr = t;
        t = t->next;
        free(ptr);
        return(t);
    }
}

void peek(struct stack* t) {
    if (isEmpty(t))
        printf("\nError: Stack Underflow.\n");
    else
        printf("Top element: %d\n", t->data);
}

void display(struct stack* t) {
    struct stack* ptr = t;
    if (!isEmpty(t)) {
        printf("Stack:\n");
        while (ptr != NULL) {
            printf("%d\n", ptr->data);
            ptr = ptr->next;
        }
    }
    else
        printf("Stack is Empty.\n");
}

void delete(struct stack* t) {
    while (!isEmpty(t)) {
        struct stack* ptr = t;
        t = t->next;
        free(ptr);
    }
}

int main() {
    int val, ch = -1;
    struct stack* top = NULL;

    while (ch != 7) {
        printf("\n1. Push an element in the stack.\n");
        printf("2. Pop an element from the stack.\n");
        printf("3. Dislay the top element.\n");
        printf("4. Display the stack.\n");
        printf("5. Check if stack is empty.\n");
        printf("6. Check if stack is full.\n");
        printf("7. Exit.\n");
        printf("Enter your choice --> ");
        scanf("%d", &ch);

        switch (ch) {
        case 1:
            printf("Enter the value to push: ");
            scanf("%d", &val);
            top = push(top, val);
            break;

        case 2:
            top = pop(top);
            break;

        case 3:
            peek(top);
            break;

        case 4:
            display(top);
            break;

        case 5:
            isEmpty(top) ? printf("Stack is empty.\n") : printf("Stack is not empty.\n");
            break;

        case 6:
            isFull(top) ? printf("Stack is full.\n") : printf("Stack is not full.\n");
            break;

        case 7:
            printf("Exiting...\n");
            delete(top);
            break;

        default:
            printf("Invalid choice.\n");
        }
    }
    return(EXIT_SUCCESS);
}
