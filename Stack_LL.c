#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>

#define MAX_SIZE 5

struct node {
  int value;
  struct node *next;
};

void push();
void display();
void pop();

typedef struct node DATA_NODE;

DATA_NODE *head_node, *first_node, *temp_node = 0, *prev_node, next_node;
int data;

int main() {
  int option = 0;

  printf("### Stack Operations Using Linked List ###\n");

  while (1) {

    printf("\nOptions\n");
    printf("1 : Push\n");
    printf("2 : Pop\n");
    printf("3 : Display\n");
    printf("4 : To exit\n");
    printf("Enter your option:");
    scanf("%d", &option);
    switch (option) {
      case 1:
        push();
        break;
      case 2:
        pop();
        break;
      case 3:
        display();
        break;
      case 4:
        exit(0);
        break;
      default:
        printf("Incorrect option\n");
    }
  }

  return 0;
}

void push() {
  int pos;
  pos = count();
  if (pos == MAX_SIZE) {
    printf("\nStack Linked List Is Full \n");
  } else {
    printf("\nEnter Element for Push Linked List : \n");
    scanf("%d", &data);

    temp_node = (DATA_NODE *) malloc(sizeof (DATA_NODE));

    temp_node->value = data;

    if (first_node == 0) {
      first_node = temp_node;
    } else {
      head_node->next = temp_node;
    }
    temp_node->next = 0;
    head_node = temp_node;
    fflush(stdin);
  }
}

void pop() {
  int pos, i = 0;
  pos = count();
  temp_node = first_node;

  if (pos > 0) {
    if (pos == 1) {
      temp_node = temp_node -> next;
      first_node = temp_node;
      printf("\n Pop from Linked List Successfully \n\n");
    } else {
      while (temp_node != 0) {
        if (i == (pos - 1)) {
          prev_node->next = temp_node->next;
          head_node = prev_node;
          printf("\n Pop from Linked List Successfully \n\n");
          break;
        } else {
          i++;
          prev_node = temp_node;
          temp_node = temp_node -> next;
        }
      }
    }
  } else
    printf("\Empty Linked List Stack\n\n");
}

void display() {
  int count = 0;
  temp_node = first_node;
  printf("\nDisplay Stack : Linked List : \n");
  while (temp_node != 0) {
    printf("%d\n", temp_node->value);
    count++;
    temp_node = temp_node -> next;
  }
  printf("\nNo Of Items In Linked List Stack : %d\n", count);
}

int count() {
  int count = 0;
  temp_node = first_node;
  while (temp_node != 0) {
    count++;
    temp_node = temp_node -> next;
  }
  printf("\nNo Of Items In Linked List Stack : %d\n", count);
  return count;
}
