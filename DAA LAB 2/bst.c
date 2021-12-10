#include <stdio.h>
#include <stdlib.h>
enum marker 
{ CHILD,
  THREAD
};
struct bstNode
{
    int data;
    struct bstNode *link[2];
    int marker[2];
};
struct bstNode *root = NULL;
struct bstNode *createNode(int data)
{
    struct bstNode *newNode;
    newNode = (struct bstNode *)malloc(sizeof(struct bstNode));
    newNode->data = data;
    newNode->link[0] = newNode->link[1] = NULL;
    newNode->marker[0] = newNode->marker[1] = THREAD;
    return newNode;
}
void insertion(int data)
{
    struct bstNode *parent, *newNode, *temp;
    int path;
    if (!root)
    {
        root = createNode(data);
        return;
    }
    parent = root;
    while (1)
    {
        if (data == parent->data)
        {
            printf("Duplicates Not Allowed\n");
            return;
        }
        path = (data > parent->data) ? 1 : 0;
        if (parent->marker[path] == THREAD)
            break;
        else
            parent = parent->link[path];
    }
    newNode = createNode(data);
    newNode->link[path] = parent->link[path];
    parent->marker[path] = CHILD;
    newNode->link[!path] = parent;
    parent->link[path] = newNode;
    return;
}

void traversal()
{
    struct bstNode *myNode;
    if (!root)
    {
        printf("Binary Tree Not Exists!!\n");
        return;
    }
    myNode = root;
    while (1)
    {
        while (myNode->marker[0] == CHILD)
        {
            myNode = myNode->link[0];
        }
        printf("%d ", myNode->data);
        myNode = myNode->link[1];
        if (myNode)
        {
            printf("%d ", myNode->data);
            myNode = myNode->link[1];
        }
        if (!myNode)
            break;
    }
    printf("\n");
    return;
}
void search(int data)
{
    struct bstNode *myNode;
    int path;

    if (!root)
    {
        printf("Tree Not Available!!\n");
        return;
    }
    myNode = root;
    while (1)
    {
        if (myNode->data == data)
        {
            printf("Given data present in BST!!\n");
            return;
        }

        path = (data > myNode->data) ? 1 : 0;
        if (myNode->marker[path] == THREAD)
            break;
        else
            myNode = myNode->link[path];
    }
    printf("Given data is not present in BST!!\n");
    return;
}

int main()
{
    int data, ch;
        printf("####_______MENU_______####\n");
        printf("1. Insertion");
        printf("2. Searching");
        printf("3. Exit\n");
        while (1)
        {
            printf("Enter your choice:");

            scanf("%d", &ch);
            switch (ch)
            {
            case 1:
                printf("Enter your input data:");
                scanf("%d", &data);
                insertion(data);
                break;
            case 2:
                printf("Enter your input data: ");
                scanf("%d", &data);
                search(data);
                break;
            case 3:
                exit(0);
            default:
                printf("You have entered wrong option...!!\n");
                break;
            }
            printf("\n");
        }
}

