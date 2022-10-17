/*#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};

 struct node * reverse(struct node **head)
{
    struct node *slow=NULL;
    slow=malloc(sizeof(struct node));
    struct node *now=NULL;
    now=malloc(sizeof(struct node));
    now=head;
    struct node *fast=NULL;
     fast=malloc(sizeof(struct node));
    while(now!=NULL)
    {
        fast=now->next;
        now->next=slow;
        slow=now;
        now=fast;
    }
    head=slow;
}
int main()
{
    struct node *head=NULL;
    struct node *first=NULL;
    struct node *second=NULL;
    struct node *third=NULL;
    head=malloc(sizeof(struct node));
    first=malloc(sizeof(struct node));
    second=malloc(sizeof(struct node));
    third=malloc(sizeof(struct node)); 
    head->data=0;
    first->data=1;
    second->data=2;
    third->data=3;
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=NULL;
    struct node *t1=NULL;
    t1=malloc(sizeof(struct node));
    t1=head;
    reverse(head);
   // head->next;
    //printf("working 1");
    while(head!=NULL)
    {
        printf("%d",head->data);
        head=head->next;
    }
    return 0;
}*/
/*#include <stdio.h>
#include <stdlib.h>
struct Node {
 int data;
struct Node* next;
};

static void reverse(struct Node** head_ref)
{
 struct Node* prev = NULL;
 struct Node* current = *head_ref;
 struct Node* next = NULL;
 while (current != NULL) {
 next = current->next;
 current->next = prev;
 prev = current;
 current = next;
 }
 *head_ref = prev;
}

void push(struct Node** head_ref, int new_data)
{
 struct Node* new_node
 = (struct Node*)malloc(sizeof(struct Node));
 new_node->data = new_data;
 new_node->next = (*head_ref);
 (*head_ref) = new_node;
}

void printList(struct Node* head)
{
 struct Node* temp = head;
while (temp != NULL) {
    printf("%d ", temp->data);
 temp = temp->next;
}
}

int main()
{
struct Node* head = NULL;

 push(&head, 1);
push(&head, 2);
push(&head, 3);
push(&head, 4);

printf("Given linked list\n");
printList(head);
 reverse(&head);
 printf("\nReversed Linked list \n");
 printList(head);
 getchar();
}*/


/*void sort(struct node *head)
{
    struct node *now=NULL;
    now=malloc(sizeof(struct node));
    now=head;
    while(now!=NULL)
    {

    }
}*/
////////////////////////////////////////////
/*#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *next;
};
struct node2
{
    int data2;
    struct node2 *next2;
};
struct node *cat(struct node *head1,struct node2 *head2)
{
    struct node *temp=NULL;
    temp=malloc(sizeof(struct node));
    temp=head1;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=head2->next2;
}
int main()
{
    struct node *head=NULL;
    struct node *first=NULL;
    struct node *second=NULL;
    struct node *third=NULL;
    head=malloc(sizeof(struct node));
    first=malloc(sizeof(struct node));
    second=malloc(sizeof(struct node));
    third=malloc(sizeof(struct node)); 
    head->data=0;
    first->data=1;
    second->data=2;
    third->data=3;
    head->next=first;
    first->next=second;
    second->next=third;
    third->next=NULL;
    struct node2 *head2=NULL;
    struct node2 *first2=NULL;
    struct node2 *second2=NULL;
    struct node2 *third2=NULL;
    head2=malloc(sizeof(struct node2));
    first2=malloc(sizeof(struct node2));
    second2=malloc(sizeof(struct node2));
    third2=malloc(sizeof(struct node2)); 
    head2->data2=0;
    first2->data2=6;
    second2->data2=7;
    third2->data2=8;
    head2->next2=first2;
    first2->next2=second2;
    second2->next2=third2;
    third2->next2=NULL;
    struct node *t1=NULL;
    t1=malloc(sizeof(struct node));
    t1=head;
    struct node2 *t2=NULL;
    t2=malloc(sizeof(struct node));
    t2=head2;
    head2=head2->next2;
    head=head->next;
        cat(t1,t2);
        while(head!=NULL)
        {
            printf("%d",head->data);
            head=head->next;
        }
    return 0;
}*/
/*#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *insertInOreder(struct node *head,int data){
    struct  node *ptr,*temp;
    temp=malloc(sizeof(struct node));
    temp->data=data;
    if(head==NULL || data< head->data)
    {
        temp->next=head;
        head=temp;
        return head;
    }
    ptr=head;
    while(ptr->next!=NULL && ptr->next->data <=data)
    {
        ptr=ptr->next;
        temp->next=ptr->next;
        ptr->next=temp;
        return head;
    }
}
void display(struct node *head)
{
    while (head!=NULL)
    {
    printf("%d",head->data);
    head=head->next;
    }
    printf("\n");
}
int main()
{struct  node *head=malloc(sizeof(struct  node));
    head->data=5;
    head->next=NULL;
    head = insertInOreder(head,2);
    head=insertInOreder(head,20);
    head=insertInOreder(head,10);
    display(head);
}*/
/*#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node*next;
}*head=NULL,*last=NULL;
void insertatend(int n)
{
    struct node* NODE=(struct node*)malloc(sizeof(struct node));
    NODE->data=n;
    NODE->next=NULL;
    if(head==NULL)
    {
        head=NODE;
        last=NODE;
    }
    else
    last->next=NODE;
    last=NODE;
}

void isloop()
{
    int f=0;
    struct node*p=head,*q=head;
    while(p&&q&&p->next)
    {
        p=p->next->next;
        q=q->next;
        if(p==q)
        {
         printf("loop is detected");
         f=1;
         break;
        }
    }
    if(f==0)
    printf("no loop detected");
}
void print()
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        if(temp->next==NULL)
        printf("%d",temp->data);
        else
        printf("%d->",temp->data);
        temp=temp->next;
    }
}
int main()
{
    for(int x=1;x<=5;x++)
    insertatend(x);
    print();
    isloop();
    printf("\n");
    last->next=head;
    isloop();
}*/
/*#include<stdlib.h>
#include<stdio.h>
struct node
{
    int data;
    struct node *prev;
    struct node *next;
};
void delete(struct node *head,int n)
{
    struct node *temp=NULL;
    temp=malloc(sizeof(struct node));
    temp=head;
    while(head->next!=NULL)
    {
    if(head->data==n)
    {
        temp=head;
        temp->prev->next=temp->next;
        temp->next->prev=temp->prev;
        free(temp);   
    }
    }
}
void main()
{
    struct node *head=NULL;
    head=malloc(sizeof(struct node));
    struct node *first=NULL;
    first=malloc(sizeof(struct node));
    struct node *second=NULL;
    second=malloc(sizeof(struct node));
    struct node *third=NULL;
    third=malloc(sizeof(struct node));
    head->next=first;
    head->data=0;
    first->data=1;
    first->next=second;
    second->data=2;
    first->prev=NULL;
    second->next=third;
    second->prev=first;
    third->next=NULL;
    third->data=3;
    third->prev=second;
    head=head->next;
    int n;
    printf("Enter node to delete;");
    scanf("%d",&n);
    printf("\n");
    delete(head,n);
    while(head!=NULL)
    {
        printf("%d",head->data);
        head=head->next;
    }
}*/
