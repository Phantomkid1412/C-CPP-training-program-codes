#include<stdio.h>    
#include<stdlib.h>
 struct node
    {
        int data;
        struct node *next;
    };
   /* void insert_start(struct node *head)
    {
       // struct node *newnode=NULL;
        struct node *newnode= malloc(sizeof(struct node));
        int n=9;
        newnode->next=head->next;
        newnode->data=9;
        head->next=newnode;
    }*/
    /* void insert_end(struct node *head,int n)
    {
       // struct node *newnode=NULL;
       
      struct node *temp= malloc(sizeof(struct node));
      temp=head;
       while(temp->next!=NULL)
       {
           temp=temp->next;
       }
        struct node *newnode= malloc(sizeof(struct node));
        newnode->next=NULL;
        temp->next=newnode;
        newnode->data=n;
    }*/
    /*void insert_atpos(struct node *t2)
    {
       // struct node *newnode=NULL;
       
        struct node *newnode= malloc(sizeof(struct node));
        
        int n=9;
        newnode->next=t2->next->next;
        t2->next=newnode;
        newnode->data=9;
    }
    struct node *delete_beg(struct node *head)
    {
       struct node *t3=head;
        head=head->next;
        free(t3);
        t3=NULL;
         return head; 
    }
    void delete_end(struct node *t2)
    {
        while(t2->next->next!=NULL)
        t2=t2->next;
        struct node *t3=t2;
        t2->next=NULL;
        t3=t3->next;
       free(t2);
    }*/
        void deleteatpos(struct node *t2)
        {
            printf("Enter the node to delete ");
            int n;
            scanf("%n",&n);
            while(t2->data==n)
            {
                
            }
        }
        
    int main()
    {
        
        struct node *head=NULL;
        struct node *first=NULL;
        struct node *second=NULL;
        struct node *third=NULL;
        struct node *fourth=NULL;
        struct node *fifth=NULL;
        struct node *sixth=NULL;
        struct node *t2=NULL;
        head = malloc(sizeof(struct node));
        first = malloc(sizeof(struct node));
        second = malloc(sizeof(struct node));
        third = malloc(sizeof(struct node));
        fourth = malloc(sizeof(struct node));
        fifth = malloc(sizeof(struct node));
        sixth = malloc(sizeof(struct node));
        t2 = malloc(sizeof(struct node));
        head->data=0;
        first->data=1;
        second->data=2;
        third->data=3;
        fourth->data=4;
        fifth->data=5;
        sixth->data=6;
        head->next=first;
        first->next=second;
        second->next=third;
        third->next=fourth;
        fourth->next=fifth;
        fifth->next=sixth;
        sixth->next=NULL;
        // insert_start(head);
      /*  insert_end(head,7);
        insert_end(head,8);
        insert_end(head,9);
        insert_end(head,10);*/
        t2=head;
       /* for(int i=0;i<4;i++)
        t2=t2->next;
        insert_atpos(t2);*/
       //head=delete_beg(head);
       /*delete_end(t2);
         */head=head->next;
         deleteatpos(t2);
       while((head)!=NULL)
        {
            printf("%d",head->data);
            head=head->next;
        }
        return 0;
    }
    