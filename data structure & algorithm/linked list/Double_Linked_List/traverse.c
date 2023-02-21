#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *prev;
    int data;
    struct node *next;
};

int main()
{
    struct node *p,*start,*temp,*last;
    int i,n,element;

    printf("Enter total no of nodes:");
    scanf("%d",&n);
    i=1;
    temp=(struct node*)malloc(sizeof(struct node));

        if(temp==NULL)
        {
            printf("Insufficient Memory!!");
            return 0;
        }
    else
        {
            printf("\nEnter value at node no %d:",i);
            scanf("%d",&element);
            temp->data=element;
            temp->prev=NULL;
            temp->next=NULL;
            p=temp;
        }

        start=temp;

        for(i=2;i<=n;i++)
        {
           temp=(struct node*)malloc(sizeof(struct node));

        if(temp==NULL)
        {
            printf("Insufficient Memory!!");
            return 0;
        }
    else
       {
         printf("\nEnter value at node no %d:",i);
         scanf("%d",&element);
         temp->data=element;
         temp->next=NULL;
         temp->prev=p;
        
         p->next=temp;
         p=p->next;
       }
    }
      last=temp;

      p=start;
      printf("\n\nEnter linked list forwardly:\n");
      printf("start");
      while(p!=NULL)
      {
          printf("->%d",p->data);
          p=p->next;

      }
       printf("->last");

      p=last;
      printf("\n\nEnter linked list backwardly:\n");
      printf("last");
      while(p!=NULL)
      {
          printf("->%d",p->data);
          p=p->prev;

      }
       printf("->start");     
    return 0;
  }