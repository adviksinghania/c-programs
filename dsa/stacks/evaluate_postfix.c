#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define size 50

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
    if (isFull(s)) {
        printf("\nError: Stack Overflow.\n");
        exit(0);
    }
    else {
        s->top++;
        s->arr[s->top] = val;
    }
}

int pop(struct stack* s) {
    if (isEmpty(s)) {
        printf("\nError: Stack Underflow.\n");
        exit(0);
    }
    else
        return(s->arr[s->top--]);
}

int top(struct stack* s) {
    if (isEmpty(s)) {
        printf("\nError: Stack Underflow.\n");
        exit(0);
    }
    else
        return(s->arr[s->top]);
}

int operation(int x, int y, char c) {
    switch (c) {
    case '/':
        return(x / y);
    case '*':
        return(x * y);
    case '+':
        return(x + y);
    case '-':
        return(x - y);
    }
}

int evaluatePostfix(char exp[]) {
    struct stack st;
    st.top = -1;

    for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] >= '0' && exp[i] <= '9')
            push(&st, exp[i] - '0');

        else if (exp[i] == '/' || exp[i] == '*' || exp[i] == '+' || exp[i] == '-') {
            int op2 = pop(&st);
            int op1 = pop(&st);
            int temp = operation(op1, op2, exp[i]);
            push(&st, temp);
        }
        else {
            printf("\nError: Invalid character \'%c\'", exp[i]);
            exit(0);
        }
    }

    return(top(&st));
}

int main() {
    char exp[size];

    printf("Enter expression: ");
    scanf("%[^\n]%*c", exp);

    printf("Evaluated Postfix: %d\n", evaluatePostfix(exp));

    return(EXIT_SUCCESS);
}
