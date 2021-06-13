#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct node {
    int data;
    struct node* next;
} Node;

void display(Node* head) {
    Node* temp = head;
    if (temp == NULL)
        printf("List is empty.\n");
    else {
        while (temp->next != NULL) {
            printf("%d --> ", temp->data);
            temp = temp->next;
        }

        printf("%d\n", temp->data);
    }
}

int length(Node* head) {
    Node* temp = head;
    int l = 0;
    while (temp != NULL) {
        l++;
        temp = temp->next;
    }

    return(l);
}

bool search(Node* head, int val) {
    Node* temp = head;
    if (temp == NULL)
        printf("List is empty.\n");
    else {
        while (temp != NULL) {
            if (temp->data == val)
                return(true);

            temp = temp->next;
        }
    }

    return(false);
}

Node* append(Node* head, int val) {
    Node* new = (Node*)malloc(sizeof(Node));
    if (new == NULL) {
        printf("Memory overflow.\n");
        exit(0);
    }

    new->data = val;
    new->next = NULL;
    if (head == NULL)
        head = new;
    else {
        Node* ptr = head;
        while (ptr->next != NULL)
            ptr = ptr->next;

        ptr->next = new;
    }

    return(head);
}

Node* insert_beg(Node* head, int val) {
    Node* new = (Node*)malloc(sizeof(Node));
    if (new == NULL) {
        printf("Memory overflow.\n");
        exit(0);
    }

    new->data = val;
    new->next = head;
    head = new;
    return(head);
}

Node* insert_node(Node* head, int val, int num) {
    Node* new = (Node*)malloc(sizeof(Node));
    if (new == NULL) {
        printf("Memory overflow.\n");
        exit(0);
    }

    new->data = val;
    new->next = NULL;
    if (head == NULL)
        head = new;
    else {
        int c = 0;
        Node* ptr = head;
        Node* preptr = ptr;
        while (c != num) {
            preptr = ptr;
            ptr = ptr->next;
            c++;
        }

        if (c == 0) {
            Node* temp = head->next;
            head = new;
            new->next = temp;
        }
        else {
            preptr->next = new;
            new->next = ptr;
        }
    }

    return(head);
}

Node* delete_beg(Node* head) {
    if (head == NULL)
        printf("List is empty.\n");
    else {
        Node* ptr = head;
        head = head->next;
        printf("First node with value %d deleted.\n", ptr->data);
        free(ptr);
    }

    return(head);
}

Node* delete_end(Node* head) {
    if (head == NULL)
        printf("List is empty.\n");
    else {
        Node* ptr = head;
        Node* preptr = ptr;
        while (ptr->next != NULL) {
            preptr = ptr;
            ptr = ptr->next;
        }

        if (ptr == head)
            head = NULL;
        else
            preptr->next = NULL;

        printf("Last node with value %d deleted.\n", ptr->data);
        free(ptr);
    }

    return(head);
}

Node* delete_node(Node* head, int num) {
    if (head == NULL)
        printf("List is empty.\n");
    else {
        int c = 0;
        Node* ptr = head;
        Node* preptr = ptr;
        while (c != num) {
            preptr = ptr;
            ptr = ptr->next;
            c++;
        }

        if (c == 0)
            head = head->next;
        else
            preptr->next = ptr->next;

        printf("Node %d with value %d deleted.\n", num + 1, ptr->data);
        free(ptr);
    }

    return(head);
}

Node* sort(Node* head) {
    if (head == NULL)
        printf("List is empty.\n");
    else {
        Node* ptr1, * ptr2;
        ptr1 = head;
        while (ptr1->next != NULL) {
            ptr2 = ptr1->next;
            while (ptr2 != NULL) {
                if (ptr1->data > ptr2->data) {
                    int temp = ptr1->data;
                    ptr1->data = ptr2->data;
                    ptr2->data = temp;
                }

                ptr2 = ptr2->next;
            }

            ptr1 = ptr1->next;
        }

        printf("List sorted in ascending order.\n");
    }

    return(head);
}

char instructions() {
    int ch;
    printf("\n1.) Print the linked list.\n");
    printf("2.) Search for an element.\n");
    printf("3.) Append a node to the list.\n");
    printf("4.) Add a node to the beginning of the list.\n");
    printf("5.) Add a node at some position in the list.\n");
    printf("6.) Print the length of the list.\n");
    printf("7.) Delete the first node.\n");
    printf("8.) Delete the last node.\n");
    printf("9.) Delete a given node from the list.\n");
    printf("10.) Sort the list.\n");
    printf("11.) Exit.\n");
    printf("Enter your choice: ");
    scanf("%d", &ch);
    return(ch);
}

int main() {
    Node* root = NULL;
    int ch = -1, val, temp;
    while (ch != 11) {
        ch = instructions();

        switch (ch)
        {
        case 1:
            display(root);
            break;

        case 2:
            printf("Enter the data to search: ");
            scanf("%d", &val);
            search(root, val) ? printf("Element found.\n") : printf("Element not found.\n");
            break;

        case 3:
            printf("Enter the data to append: ");
            scanf("%d", &val);
            root = append(root, val);
            break;

        case 4:
            printf("Enter the data: ");
            scanf("%d", &val);
            root = insert_beg(root, val);
            break;

        case 5:
            printf("Enter the data: ");
            scanf("%d", &val);
            printf("Enter the node number: ");
            scanf("%d", &temp);
            if (temp > 0 && temp <= length(root) + 1)
                root = insert_node(root, val, temp - 1);
            else
                printf("Invalid Node Number.\n");

            break;

        case 6:
            temp = length(root);
            temp == 0 ? printf("List is empty.\n") : printf("Length: %d\n", temp);
            break;

        case 7:
            root = delete_beg(root);
            break;

        case 8:
            root = delete_end(root);
            break;

        case 9:
            printf("Enter the node number: ");
            scanf("%d", &temp);
            if (temp > 0 && temp <= length(root) + 1)
                root = delete_node(root, temp - 1);
            else
                printf("Invalid Node Number.\n");

            break;

        case 10:
            root = sort(root);
            break;

        case 11:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice.\n");
        }
    }

    return(0);
}
