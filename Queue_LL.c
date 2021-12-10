#include<stdio.h>
#include<stdlib.h>

struct Node
{
   int data;
   struct Node *next;
};

struct Node *front = NULL,*rear = NULL;

void EnQueue(int);
void DeQueue();
void display();
int main()
{
    int choice, value;
    printf("\n### Queue Operations using Linked List ###\n");
        printf("\n****** MENU ******\n");
        printf("1. EnQueue\n");
        printf("2. DeQueue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
    while(1)
    {
        printf("Enter your choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
         case 1:
                printf("Insert the value you want to enter: ");
                scanf("%d", &value);

                EnQueue(value);
                break;
         case 2:
                DeQueue();
                break;
         case 3:
                display();
                break;
         case 4:
                exit(0);
         default:
                printf("\nIncorrect choice\n");
        };
    }
   return 0;
}

void EnQueue(int value)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode -> data = value;
    newNode -> next = NULL;

    if(front == NULL)
        front = rear = newNode;
    else
    {
        rear -> next = newNode;
        rear = newNode;
    }
    printf("\n value inserted in Queue!!!\n");
}

void DeQueue()
{
    if(front == NULL)
        printf("\n Queue is Empty!!!\n");
    else
    {
        struct Node *temp = front;
        front = front -> next;
        printf("\n Deleted element is: %d\n", temp->data);
        free(temp);
    }
}

void display()
{
    if(front == NULL)
        printf("\n Queue is Empty!!!\n");
    else
    {
        struct Node *temp = front;
        while(temp->next != NULL)
        {
            printf("%d --> ",temp->data);
            temp = temp -> next;
        }
        printf("%d \n",temp->data);
   }
}
