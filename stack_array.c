#include<stdio.h>
#include<stdlib.h>

#define MAX 5

int top=-1,stack[MAX];
void Push();
void Pop();
void Display();

void main()
{
int choice;
while(1)
{
printf("\n#******** Stack Menu ********#");
printf("\n\n1.Push\n2.Pop\n3.Display\n4.Exit");
printf("\n\nEnter your choice(1-4):");
scanf("%d",&choice);
switch(choice)
{
case 1: Push();
break;
case 2: Pop();
break;
case 3: Display();
break;
case 4: exit(0);
default: printf("\nIncorrect Choice!!");
}
}
}

void Push()
{
int value;
if(top==MAX-1)
{
printf("\nStack is full!!");
}
else
{
printf("\nEnter element to push:");
scanf("%d",&value);
top=top+1;
stack[top]=value;
}
}

void Pop()
{
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nDeleted element is %d",stack[top]);
top=top-1;
}
}

void Display()
{
int i;
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
printf("\nStack is...\n");
for(i=top;i>=0;--i)
printf("%d\n",stack[i]);
}
}
