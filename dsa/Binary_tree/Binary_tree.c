#include<stdio.h>
#include<stdlib.h>

struct node //structure of node of binary tree
{
    int data;
    struct node *left_child;
    struct node *right_child;
};

struct node *new_node(int value) //function for creating new node
{
    struct node *tmp = (struct node *)malloc(sizeof(struct node));
    tmp->data = value;
    tmp->left_child = tmp->right_child = NULL;
    return tmp;
}

struct node* insert_node(struct node* node, int value) // inserting nodes!
{
    if (node == NULL) return new_node(value);
    if (value < node->data)
    {
        node->left_child = insert_node(node->left_child, value);
    }
    else if (value > node->data)
    {
        node->right_child = insert_node(node->right_child, value);
    }
    return node;
}

struct node* search(struct node ** binary_tree, int value)//searching for node 
{
    if(!(*binary_tree)) 
    {
        return NULL;
    }
    if(value == (*binary_tree)->data) 
    {
        return *binary_tree;
    } 
    else if(value < (*binary_tree)->data)
    {
        search(&((*binary_tree)->left_child), value);
    } 
    else if(value > (*binary_tree)->data)
    {
        search(&((*binary_tree)->right_child), value);
    }
}

void delete_tree(struct node * binary_tree) //deleting whole tree
{
    if (binary_tree) {
    delete_tree(binary_tree->left_child);
    delete_tree(binary_tree->right_child);
    free(binary_tree);
}
}

void display_preorder(struct node * binary_tree) 
{
    if (binary_tree) {
    printf("%d ",binary_tree->data);
    display_preorder(binary_tree->left_child);
    display_preorder(binary_tree->right_child);
}
}

void display_inorder(struct node * binary_tree) 
{
    if (binary_tree) {
    display_inorder(binary_tree->left_child);
    printf("%d ",binary_tree->data);
    display_inorder(binary_tree->right_child);
}
}

void display_postorder(struct node * binary_tree) 
{
    if (binary_tree) {
    display_postorder(binary_tree->left_child);
    display_postorder(binary_tree->right_child);
    printf("%d ",binary_tree->data);
}
}

int main()
{
    struct node *root_node = NULL;
    root_node = insert_node(root_node, 10);
    insert_node(root_node, 10);
    insert_node(root_node, 30);
    insert_node(root_node, 25);
    insert_node(root_node, 36);
    insert_node(root_node, 56);
    insert_node(root_node, 78);
    
    display_inorder(root_node);
    printf("\n");
    display_preorder(root_node);
    printf("\n");
    display_postorder(root_node);
    printf("\n");
    
    if(search(&root_node,10))
    printf("Node is present.\n");
    else
    printf("Node is not present\n");
    
    return 0;
}