#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int player;
    struct node* next;
} Node;

int main() {
    Node* start;
    int n, k;
    printf("Enter the number of players : ");
    scanf("%d", &n);
    printf("Enter the value of k (every kth player gets eliminated): ");
    scanf("%d", &k);

    start = (Node*)malloc(sizeof(Node));
    start->player = 1;
    Node* ptr = start;
    for (int i = 2; i <= n; i++) {
        Node* new = (Node*)malloc(sizeof(Node));
        new->player = i;
        ptr->next = new;
        new->next = start;
        ptr = new;
    }

    ptr = start;
    printf("Player IDs: ");
    for (int i = 1; i < n; i++) {
        printf("%d, ", ptr->player);
        ptr = ptr->next;
    }

    printf("%d\n", ptr->player);
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= k - 1; j++)
            ptr = ptr->next;

        ptr->next = ptr->next->next;
    }

    printf("Player %d is the winner.\n", ptr->player);
    return(0);
}
