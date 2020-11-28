// Program to Create Binary Tree in C Using Recursion
// 28.11.2020

#include <stdio.h>

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} node;

node *create()
{
    node *p;
    int x;
    printf("Enter data(-1 for no data):");
    scanf("%d", &x);

    if (x == -1)
        return NULL;

    p = (node *)malloc(sizeof(node));
    p->data = x;

    printf("Enter left child of %d: \n", x);
    p->left = create();

    printf("Enter right child of %d: \n", x);
    p->right = create();

    return p;
}

void preorder(node *t)

{
    if (t != NULL)
    {
        printf("\n%d", t->data);
        preorder(t ->left );
        preorder(t -> right);
    }
}


int main()
{
    node * root;
    root = create();
    printf("\n The preorder traversal of tree is: \n");
    preorder(root);

    return 0;
}