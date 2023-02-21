#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
  struct node *prev;
};
int main(int argc, char const *argv[])
{
    struct node *p,*temp,*start,*last;
    int n,element,i,loc;
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
      printf("Insufficient memory!");
      return 0;
  }
 else
  {
    printf("Enter value at node no %d:",i);
    scanf("%d",&element);
    temp->data=element;
    temp->prev=p;
    temp->next=NULL;
    p->next=temp;
    p=p->next; //p=temp;
  }
}
  last=temp;

   p=start;
   printf("Enter linked list:\nstart");
   while(p!=NULL)
   {
       printf("->%d",p->data);
       p=p->next;
   }
   printf("->Last");
   
   p=start;
   i=1;
   printf("\nwhich node you want to delete:");
   scanf("%d",&loc);
  
   while(i<loc)
    {
        
        p=p->next;
        i++;
    }

    if(loc>1)
     {
       if(p->next!=NULL)
       {
        p->prev->next=p->next;
        p->next->prev=p->prev;
        free(p);
       }
       else
       {
         p->prev->next=NULL;
         last=p->prev;
         free(p);
       }
     }
     else
     {
      start=p->next;
      free(p);
      start->prev=NULL;
     }

   p=start;
   printf("Modified linked list forwardly:\nstart");
   while(p!=NULL)
   {
       printf("->%d",p->data);
       p=p->next;
   }
   printf("->Last");

    p=last;
  
   printf("\nModified linked list backwardly:\nlast");
   while(p!=NULL)
   {
       printf("->%d",p->data);
       p=p->prev;
   }
   printf("->start");

   return 0;

}
