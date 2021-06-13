#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define size 20

struct stack {
    int arr[size];
    int top;
};

bool isFull(struct stack* s) {
    return(s->top == size - 1);
}

bool isEmpty(struct stack* s) {
    return(s->top == -1);
}

void push(struct stack* s, int val) {
    if (isFull(s))
        printf("\nError: Stack Overflow.\n");
    else {
        s->top++;
        s->arr[s->top] = val;
        printf("Task Successful.\n");
    }
}

void pop(struct stack* s) {
    if (isEmpty(s))
        printf("\nError: Stack Underflow.\n");
    else
        printf("Popped element: %d\n", s->arr[s->top--]);
}

void top(struct stack* s) {
    if (isEmpty(s))
        printf("\nError: Stack Underflow.\n");
    else
        printf("Top element: %d\n", s->arr[s->top]);
}

void display(struct stack* s) {
    if (!isEmpty(s)) {
        printf("Stack:\n");
        for (int i = s->top; i >= 0; i--)
            printf("%d\n", s->arr[i]);
    }
    else
        printf("Stack is Empty.\n");
}

int main() {
    struct stack st;
    st.top = -1;
    int val, ch = -1;

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
            push(&st, val);
            break;

        case 2:
            pop(&st);
            break;

        case 3:
            top(&st);
            break;

        case 4:
            display(&st);
            break;

        case 5:
            isEmpty(&st) ? printf("Stack is empty.\n") : printf("Stack is not empty.\n");
            break;

        case 6:
            isFull(&st) ? printf("Stack is full.\n") : printf("Stack is not full.\n");
            break;

        case 7:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice.\n");
        }
    }
    return(EXIT_SUCCESS);
}
