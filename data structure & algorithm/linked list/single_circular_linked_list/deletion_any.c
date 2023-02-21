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
    int n,element,i,t,loc;
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
   printf("Enter linked list:\nstart");
   do
   {
       printf("->%d",p->data);
       p=p->next;
   }while(p!=start);
    

   
   printf("\nEnter position node no to delete value:");
   scanf("%d",&loc);
   p=start;
   i=1;
   while(i<loc)
   {
       temp=p;
       p=p->next;
       i++;
   }

  if(loc>1)
  {
   if(p->next!=start)
   {
      temp->next=p->next;
   }
else
    {
      temp->next=p->next;
      last=temp;
    }
  }
  else
    {
      start=p->next;
      last->next=start;
    }   

    free(p);
    n--;
   p=start;
   printf("Modified single circular linked list:\nstart");
   do
   {
       printf("->%d",p->data);
       p=p->next;
   }while(p!=start);


    printf("\nNumber of times traverse the list circularly=");
    scanf("%d",&t);
    printf("Traversing circularly for %d times:\nstart",t);
    p=start;
    for(i=1;i<=t*n;i++)
    {
        printf("->%d ",p->data);
        p=p->next;
    }
   return 0;
}
