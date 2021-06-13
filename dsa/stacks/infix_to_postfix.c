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

bool hasHighPrec(char c1, char c2) {
    return ((c1 == '/' || c1 == '*') && (c2 == '+' || c2 == '-'));
}

void toPostfix(char exp[]) {
    struct stack st;
    st.top = -1;
    char temp[size];
    int index = 0;

    for (int i = 0; exp[i] != '\0'; i++) {
        if (exp[i] >= '0' && exp[i] <= '9' || exp[i] >= 'A' && exp[i] <= 'Z' || exp[i] >= 'a' && exp[i] <= 'z')
            temp[index++] = exp[i];

        else if (exp[i] == '/' || exp[i] == '*' || exp[i] == '+' || exp[i] == '-') {
            while (!isEmpty(&st) && top(&st) != '(' && hasHighPrec(top(&st), exp[i]))
                temp[index++] = pop(&st);

            push(&st, exp[i]);
        }
        else if (exp[i] == '(')
            push(&st, exp[i]);

        else if (exp[i] == ')') {
            while (!isEmpty(&st) && top(&st) != '(')
                temp[index++] = pop(&st);

            pop(&st);
        }
    }

    while (!isEmpty(&st))
        temp[index++] = pop(&st);

    temp[index] = '\0';
    printf("%s\n", temp);
}

int main() {
    char exp[size];

    printf("Enter expression: ");
    scanf("%[^\n]%*c", exp);

    printf("Converting to Postfix: ");
    toPostfix(exp);

    return(EXIT_SUCCESS);
}
