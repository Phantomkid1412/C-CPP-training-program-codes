/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front, *rear;
void insert(int x);
void initializequeue()
{
    front=NULL;
    rear=NULL;
}
void insert(int x)
{
    struct node *temp;
    temp=malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Memory not available\n");
        return;
    }
    temp->data=x;
    temp->next=NULL;
    if(front==NULL)
    front=temp;
    else
    rear->next=temp;
    rear=temp;
}
void pop()
{
    if(front==NULL)
    {
        printf("Underflow");
    }
    else{
    struct node *temp;
    temp=malloc(sizeof(struct node));
    temp=front;
    front=front->next;
    //temp->next=temp->next->next;
    free(temp);
    }
}
void display()
{
    struct node* temp=front;
    while(temp)
    {
        printf("%d",temp->data);
        temp=temp->next;
    }
    printf("\n");
}
int main()
{
    

    initializequeue();
    insert(1);
    insert(2);
    insert(3);
    insert(4);
    printf("Queue is: ");
    pop();
    display();

    return 0;
}*/
/*#include<stdio.h>
#include<stdlib.h>
#define max 50
int arr[max];
int rear = - 1;
int front = - 1;
void display()
{
    int i;
    if(front==-1)
    {
        printf("Queue is empty\n");
    }
    else
    {
        printf("Queue is: \n");
        for(int i=0;i<=rear;i++)
        {
            printf("%d",arr[i]);
        }
        printf("\n");
        
    }
}
void insert()
{
    int data;
    if(rear== max- 1)
    {
        printf("overflow\n");
    }
    else
    {
        if(front==-1)
        
            front=0;
            printf("Insert the element in queue:");
            scanf("%d",&data);
            rear=rear+1;
            arr[rear]=data;
        
    }
}

int main()
{
    // int a[5]={1,2,3,4,5};
    // int n;
    // n=sizeof(a)/sizeof(int);
    // display(a,n);
    // return 0;
    insert();
    //printf("working1");
    insert();
    insert();
    insert();
    display();
    
}*/
/*#include <stdio.h>
#include <stdlib.h>

typedef struct node {
int data;
int priority;
struct node* next;
} Node;
Node* newnode(int d, int p) {
Node* temp = malloc(sizeof(Node));
temp->data = d;
temp->priority = p;
temp->next = NULL;
return temp;
}
int peek(Node** head) {
return (*head)->data;
}
void pop(Node** head) {
Node* temp = *head;
(*head) = (*head)->next;
free(temp);
}

void push(Node** head, int d, int p) {
Node* start = (*head);
Node* temp = newnode(d, p);
if ((*head)->priority > p) {
 temp->next = *head;
 (*head) = temp;
} else {
 while (start->next != NULL &&
 start->next->priority < p) {
start = start->next;
 }

 temp->next = start->next;
 start->next = temp;
}
}

int isEmpty(Node** head) {
return (*head) == NULL;
}

int main() {
Node* pq = newnode(2, 1);
push(&pq, 3, 2);
push(&pq, 4, 3);
push(&pq, 1, 0);
while (!isEmpty(&pq)) {
 printf("%d-", peek(&pq));
pop(&pq);
}
return 0;
}*/

/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int priority;
    int data;
    struct node* link;
}*front=NULL,*rear=NULL;
int isEmpty(){
        if (front==NULL)
        return 1;
        else
        return 0;
    }
void display(){
        struct node* temp;
        temp=front;
        if(isEmpty())
        {
            printf("queue is empty\n");
            exit(1);
        }
        else{
        printf("Queue :\n");
        while(temp!=NULL)
        {
            printf("%d ",temp->data);
            temp=temp->link;
        }
        }
        printf("\n");
    }
void enqueue(int data,int priority)
{
    struct node* temp =NULL;
    struct node* newnode=malloc(sizeof(struct node));
    if (newnode==NULL){
        printf("memory is full\n");
        exit(1);
    }
    newnode->priority=priority;
    newnode->data=data;
    newnode->link=NULL;
    if(isEmpty()|| priority< front->priority)
    {
        newnode->link=front;
        front=newnode;
    }
    else
    {
        temp=front;
        while(temp->link !=NULL && temp->link->priority<=priority)
        temp=temp->link;
        newnode->link=temp->link;
        temp->link=newnode;
    }
}
        int dequeue(){
            struct node* temp;
        int data;
        temp=front;
        data=temp->data;
        front=front->link;
        free(temp);
        temp=NULL;
        return data;
    }
int main(){
    enqueue(10,2);
    enqueue(20,1);
    enqueue(30,5);
    enqueue(50,8);
    enqueue(40,4);
    
   //display();
   dequeue();
  display();
}*/
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node* top=NULL;
void push(int val)
{
    struct node *newnode;
    newnode=malloc(sizeof(struct node));
    newnode->data=val;
    if(top==NULL)
    {
        newnode->next=NULL;
    }
    else
    {
        newnode->next=top;
    }
    top=newnode;
    //printf("Node is inserted\n");
}
int pop()
{
    if(top==NULL)
    {
        printf("\n Underflow");
    }
    else
    {
        struct node *temp=top;
        int temp1=top->data;
        top=top->next;
        free(temp);
        return temp1;
    }
}
void display()
{
    if(top==NULL)
    {
        printf("Underflow");
    }
    else
    {
        printf("The stack is\n");
        struct node*temp=top;
        while(temp->next!=NULL)
        {
            printf("%d\n",temp->data);
            temp=temp->next;
        }
        printf("%d\n",temp->data);
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    //pop();
    display();

    return 0;
}