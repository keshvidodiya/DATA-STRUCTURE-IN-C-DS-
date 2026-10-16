#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *left;
    struct Node *right;
};

struct Node* createNode(int value)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));

    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

struct Node* insert(struct Node *root, int value)
{
    if(root == NULL)
        return createNode(value);

    if(value < root->data)
        root->left = insert(root->left, value);
    else if(value > root->data)
        root->right = insert(root->right, value);

    return root;
}

struct Node* deleteNode(struct Node *root, int value)
{
    if(root == NULL)
        return root;

    if(value < root->data)
        root->left = deleteNode(root->left, value);
    else if(value > root->data)
        root->right = deleteNode(root->right, value);
    else
    {
        if(root->left == NULL)
            return root->right;
        else if(root->right == NULL)
            return root->left;
        else
        {
            struct Node *temp = root->right;

            while(temp->left != NULL)
                temp = temp->left;

            root->data = temp->data;
            root->right = deleteNode(root->right, temp->data);
        }
    }

    return root;
}

int height(struct Node *root)
{
    if(root == NULL)
        return 0;

    int left = height(root->left);
    int right = height(root->right);

    if(left > right)
        return left + 1;
    else
        return right + 1;
}

int count(struct Node *root)
{
    if(root == NULL)
        return 0;

    return 1 + count(root->left) + count(root->right);
}

void inorder(struct Node *root)
{
    if(root != NULL)
    {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void main()
{
    struct Node *root = NULL;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 70);
    root = insert(root, 60);

    printf("\nInorder traversal: ");
    inorder(root);

    printf("\nHeight of tree: %d", height(root));

    printf("\nTotal nodes: %d", count(root));

    root = deleteNode(root, 30);

    printf("\nAfter deletion: ");
    inorder(root);
}
