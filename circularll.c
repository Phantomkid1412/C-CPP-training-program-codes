#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node * prev;
    struct node * next;
    int data;
};
int main()
{
    int count;
    struct node *head=NULL;
    struct node *first=NULL;
    struct node *second=NULL;
    struct node *tail=NULL;
    struct node *pointer=NULL;

    pointer=(struct node*)malloc(sizeof(struct node));
    head=(struct node*)malloc(sizeof(struct node));
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    tail=(struct node*)malloc(sizeof(struct node));
    head->data=1;
    first->data=2;
    second->data=3;
    tail->data=4;
    head->next=first;
    first->next=second;
    second->next=tail;
    tail->next=head;
     head->prev=tail;
    first->prev=head;
    second->prev=first;
     head->prev=second;
    pointer=head;
    while(pointer!=tail)
    {
        count++;
        printf(" %d ",pointer->data);
        pointer=pointer->next;
    }
    printf(" %d ",pointer->data);
    return 0;
}