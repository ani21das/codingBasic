#include<stdio.h>
#include<stdlib.h>

struct node
        {
          struct node *prev;
          int data;
          struct node *next;
        };

int element,i,n,loc,j,split;
struct node *p,*temp,*start,*last,*start1,*start2,*last1,*last2;
void listmake();
void display_f();
void display_b();

 int main()
 {
     listmake();
     printf("\n\nEntered linked list displayed forwardly:\n");
     printf("\nstart");
     p=start;
     display_f();
     printf("->last\n");
     
     printf("\n\nEntered linked list displayed backwardly:\n");
     printf("\nlast");
     p=last;
     display_b();
     printf("->start\n");

    printf("\n\nHow many split do you want to do:");
    scanf("%d",&split);
    
    for(j=1;j<=split;j++)
    {
     printf("\n\nsplit at node no:");
     scanf("%d",&loc);
     start1=start;
     p=start;
     i=1;
     
     while(i<loc)
     {
         p=p->next;
         i++;
     }
    
    start2=p->next;
    start2->prev=NULL;
    p->next=NULL;
    last1=p;
    last2=last;

    printf("\n\nSplitted no %d linked list are:",j);

    printf("\n\nForwardly diplayed linked list %d:\n\n",j);
    p=start1;
    printf("start1");
    display_f();
    printf("->last1\n");

    printf("\n\nbackwardly diplayed linked list %d:\n\n",j);
    p=last1;
    printf("last1");
    display_b();
    printf("->start1\n");
    
    printf("\n\nSplitted no %d linked list are:\n\n",j+1);
    p=start2;
    printf("start2");
    display_f();
    printf("->last2\n");
    
    printf("\n\nBackwardly displayed %d no linked list:\n\n",j+1);
    p=last2;
    printf("last2");
    display_b();
    printf("->start2\n");

    start=start2;

   }

   return 0;
 }


 void listmake()
 {
     printf("Enter total no of nodes:");
    scanf("%d",&n);
    i=1;
    temp=(struct node*)malloc(sizeof(struct node));

        if(temp==NULL)
        {
            printf("Insufficient Memory!!");
            return;
        }
    else
        {
            printf("\n\nEnter value at node no %d:",i);
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
            return;
        }
    else
       {
         printf("\n\nEnter value at node no %d:",i);
         scanf("%d",&element);
         temp->data=element;
         temp->next=NULL;
         temp->prev=p;
        
         p->next=temp;
         p=p->next;
       }
    }
      last=temp;
      return;
 }
  
   void display_f()
   {
       while(p!=NULL)
      {
          printf("->%d",p->data);
          p=p->next;
      }
     return;
   }

   void display_b()
   {
        while(p!=NULL)
      {
          printf("->%d",p->data);
          p=p->prev;
      }
     return;
   }
