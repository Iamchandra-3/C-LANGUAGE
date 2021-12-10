#include"stdio.h"
#include"stdlib.h"
#define SIZE 50

struct queue
{
    int data[SIZE];
    int front;
    int rear;
};

struct queue* createQ();
void enqueue(struct queue* q, int);
int dequeue(struct queue* q);
void display(struct queue* q);
int isempty(struct queue* q);
void printQ(struct queue* q);

struct node
{
    int vertex;
    struct node* next;

};

struct node* createNode(int);
struct graph{
    int numvertices;
    structnode** adjlists;
    int *visited;
};


//lets write BFS algorithm
int Bfs(struct Graph* graph, int startVertex)
{
    struct queue* q = createQ();
}

