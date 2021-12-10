#include <stdio.h>
#include<stdlib.h>


int h[10]={};

int insert()
{

 int key,index,i,flag=0,hkey;
 printf("\nEnter a value to insert into hash table\n");
 scanf("%d",&key);
 hkey=key%10;
 for(i=0;i<10;i++)
    {

     index=(hkey+i)%10;

     if(h[index] == NULL)
     {
        h[index]=key;
         break;
     }

    }

    if(i == 10)

     printf("\nElement can't be inserted\n");
     return 0;
}
int search()
{

 int key,index,i,flag=0,hkey;
 printf("\nEnter element to search\n");
 scanf("%d",&key);
 hkey=key%10;
 for(i=0;i<10; i++)
 {
    index=(hkey+i)%10;
    if(h[index]==key)
    {
      printf("value found at index: %d",index);
      break;
    }
  }
  if(i == 10)
    printf("\n value not found\n");
    return 0;
}
int display()
{

  int i;

  printf("\nElements in the hash table are \n");

  for(i=0;i< 10; i++)
  printf("\n At index %d \t value =  %d",i,h[i]);
  return 0;
}
int main()
{
    int ch,i;
    while(1)
    {
        printf("\n1. Insert\n2. Search \n3. Display \n4. Exit \n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                insert();
                break;
            case 2:
                search();
                break;
            case 3:
                display();
                break;
            case 4:exit(0);
            default:
            printf("\nInvalid Choice...!\n");
        }
    }
    return 0;
}
