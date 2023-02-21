#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
int main(int argc, char const *argv[])
{
    struct node *p,*temp,*start,*last;
    int n,element,i,loc,t;
    printf("Enter total no of nodes:");
    scanf("%d",&n);
    i=1;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Insufficient memory!");
        return 0;
    }
  else
  {
      printf("Enter value at node no %d:",i);
      scanf("%d",&element);
      temp->data=element;
      temp->next=NULL;
      p=temp;
  }
  start=temp;
  for(i=2;i<=n;i++)
  {
   temp=(struct node*)malloc(sizeof(struct node));
   if(temp==NULL)
  {
      printf("Insufficient memory!");
      return 0;
  }
 else
  {
    printf("Enter value at node no %d:",i);
    scanf("%d",&element);
    temp->data=element;
    temp->next=NULL;
    p->next=temp;
    p=p->next; //p=temp;
  }
}
  last=temp;
  last->next=start;

   p=start;
   printf("\nEnter linked list:\nstart");
   do
   {
       printf("->%d",p->data);
       p=p->next;
   }while(p!=start);

   p=start;
    i=1;
    temp=(struct node*)malloc(sizeof(struct node));
       if(temp==NULL)
       {
           printf("Insufficient Memory!!");
           return 0;
       }
    
    else
     {
         printf("\nEnter the value of element to be inserted at beginning(node no %d):",i);
         scanf("%d",&element);
         n++;
         temp->data=element;
         temp->next=p;
         start=temp;
         last->next=start;
     }
      p=start;
   printf("Modified single circular linked list:\nstart");
   do
   {
       printf("->%d",p->data);
       p=p->next;
   }while(p!=start);

   
    printf("\nNumber of times traverse the list circularly=");
    scanf("%d",&t);
    printf("\nTraversing circularly for %d times:\nstart",t);
    p=start;
    for(i=1;i<=t*n;i++)
    {
        printf("->%d ",p->data);
        p=p->next;
    }
  return 0;
}