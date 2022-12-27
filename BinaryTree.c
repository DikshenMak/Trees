//Creation And Implementation Of Binary Tree and Binary Search Tree

#include<stdio.h>
#include<conio.h>
#include<malloc.h>

struct node
{
    struct node* left;
    int data;
    struct node* right;
};

struct node* root = NULL;

struct node* createNode(int data)
{
    struct node *node  = malloc(sizeof(struct node));
    node -> data = data;
    node -> left = NULL;
    node -> right = NULL;

    return(node);
}

void PreOrder(struct node *root)
{
    if(root == NULL)
    return;

    printf("%d\t", root -> data);
    PreOrder(root -> left);
    PreOrder(root -> right);
}

void InOrder(struct node *root)
{
    if(root == NULL)
    return;

    InOrder(root -> left);
    printf("%d\t", root -> data);
    InOrder(root -> right);
}

void PostOrder(struct node *root)
{
    if(root == NULL)
    return;

    PostOrder(root -> left);
    PostOrder(root -> right);
    printf("%d\t", root -> data);
}

int main()
{
    //Root Node
    root = createNode(20);

    //Left Subtree
    root -> left = createNode(15);
    root -> left -> left = createNode(12);
    root -> left -> right = createNode(17);
    root -> left -> right -> left = createNode(16);
    root -> left -> right -> right = createNode(18);

    //Right Subtree
    root -> right = createNode(35);
    root -> right -> left = createNode(21);
    root -> right -> right = createNode(39);
    root -> right -> right -> left = createNode(36);
    root -> right -> right -> right = createNode(45);

    printf("Pre-Order : ");
    PreOrder(root);

    printf("\nIn-Order : ");
    InOrder(root);

    printf("\nPost-Order : ");
    PostOrder(root);

    return 0;
}