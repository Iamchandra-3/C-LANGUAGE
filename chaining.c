#include <stdio.h>
#include "stdlib.h"

struct node
{
               int data;
               struct node *next;
};
struct node *head[10]={NULL},*c;
int insert()
{
    int i,key;
    printf("\nEnter a value to insert it into hash table\n");
    scanf("%d",&key);
    i=key%10;
    struct node * newnode=(struct node *)malloc(sizeof(struct node));
    newnode->data=key;
    newnode->next = NULL;
    if(head[i] == NULL)
        head[i] = newnode;
    else
    {
        c=head[i];
        while(c->next != NULL)
        {
           c=c->next;
        }
        c->next=newnode;
    }
    return 0;
}
int search()
{
    int key,index;
    printf("\nEnter the element to be searched\n");
    scanf("%d",&key);
    index=key%10;
    if(head[index] == NULL)
        printf("\n Search element not found\n");
    else
    {
        for(c=head[index];c!=NULL;c=c->next)
        {
            if(c->data == key)
                {
                    printf("search element found\n");
                    break;
                }
        }
        if(c==NULL)
                printf("\n Search element not found\n");
    }
    return 0;
}
int display()
{
    int i;
    for(i=0;i<10;i++)
          {
           printf("\nEntries at index %d\n",i);
               if(head[i] == NULL)
               {
               printf("No Hash Entry");

               }
               else
               {
                    for(c=head[i];c!=NULL;c=c->next)
                        printf("%d->",c->data);
               }
          }
return 0;
}
int main()
{
    int ch,key,i;
    printf("\n###______Hash Table using Chaining______###\n");
    while(1)
    {
        printf("\n1. Insert\n2. Display \n3. Search \n4.Exit \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                display();
                break;
            case 3:
                search();
                break;
            case 4:exit(0);
            default:
                printf("Invalid Choice...!");
        }
    }
    return 0;
}
