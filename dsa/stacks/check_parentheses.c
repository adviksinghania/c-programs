#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define size 50

struct stack {
    char arr[size];
    int top;
};

bool isFull(struct stack* s) {
    return(s->top == size - 1);
}

bool isEmpty(struct stack* s) {
    return(s->top == -1);
}

void push(struct stack* s, char val) {
    if (isFull(s)) {
        printf("\nError: Stack Overflow.\n");
        exit(0);
    }
    else {
        s->top++;
        s->arr[s->top] = val;
    }
}

char pop(struct stack* s) {
    if (isEmpty(s)) {
        printf("\nError: Stack Underflow.\n");
        exit(0);
    }
    else
        return(s->arr[s->top--]);
}

char top(struct stack* s) {
    if (isEmpty(s)) {
        printf("\nError: Stack Underflow.\n");
        exit(0);
    }
    else
        return(s->arr[s->top]);
}

void display(struct stack* s) {
    if (!isEmpty(s)) {
        printf("\nStack:\n");
        for (int i = s->top; i >= 0; i--)
            printf("%c\n", s->arr[i]);
    }
    else
        printf("Stack is Empty.\n");
}

bool isPair(char c1, char c2) {
    return(c1 == '(' && c2 == ')' || c1 == '{' && c2 == '}' || c1 == '[' && c2 == ']');
}

bool checkParentheses(char exp[]) {
    struct stack st;
    st.top = -1;

    for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] == '(' || exp[i] == '{' || exp[i] == '[')
            push(&st, exp[i]);

        if (exp[i] == ')' || exp[i] == '}' || exp[i] == ']') {
            if (isEmpty(&st) || !isPair(top(&st), exp[i]))
                return(false);
            else
                pop(&st);
        }
    }

    return(isEmpty(&st));
}

int main() {
    char exp[size];

    printf("Enter expression: ");
    scanf("%[^\n]%*c", exp);

    if (checkParentheses(exp))
        printf("Parentheses are matching.\n");
    else
        printf("Parentheses are not matching.\n");

    return(EXIT_SUCCESS);
}
