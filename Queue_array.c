#include<stdio.h>
#include<stdlib.h>

#define n 5

int queue[n],choice,front=0,rear=0,i,j=1,x=n;

void Enqueue()
{
    if(rear==x)
                printf("\n Queue is Full");
            else
            {
                printf("\n Enter no %d:",j++);
                scanf("%d",&queue[rear++]);
            }
}

void Dequeue()
{
    if(front==rear)
        {
           printf("\n Queue is empty");
        }
            else
            {
                printf("\n Deleted Element is %d",queue[front++]);
                x++;
            }
}

int Display()
{
    printf("\nQueue Elements are:\n ");
        if(front==rear)
        printf("\n Queue is Empty");
            else
            {
                for(i=front; i<rear; i++)
                {
                    printf("%d",queue[i]);
                    printf("\n");
                }
            }
    return 0;
}

int main()
{
    printf("Queue using Array");
    printf("\n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit");
    while(1)
    {
        printf("\nEnter the Choice:");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            Enqueue();
            break;
        case 2:
            Dequeue();
            break;
        case 3:
            Display();
            break;
            case 4:
                exit(0);
            default:
                printf("Wrong Choice: please see the options");

        }
    }
    return 0;
}
