#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
int main(int argc, char const *argv[])
{
    struct node *p,*p1,*temp,*start,*start1;
    int n,element,i;
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
      printf("\nEnter value at node no %d:",i);
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
    printf("\nEnter value at node no %d:",i);
    scanf("%d",&element);
    temp->data=element;
    temp->next=NULL;
    p->next=temp;
    p=p->next; //p=temp;
  }
}
   p=start;
   printf("\nEnter linked list:\nstart");
   while(p!=NULL)
   {
       printf("->%d(%u)",p->data,p);
       p=p->next;
   }

   start1=(struct node*)malloc(sizeof(struct node));
   if(start1==NULL)
   {
       printf("Insufficient Memory!!");
       return 0;
   }

   else
   {
       p=start;
       p1=start1;
       p1->data=p->data;
       p1->next=NULL;
   }

while(p->next!=NULL)
{
    p=p->next;
    
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Insufficient memory!");
        return 0;
    }
  else
  {
      temp->data=p->data;
      temp->next=NULL;

      p1->next=temp;
      p1=p1->next;
  }
}

p=start1;
printf("\nCopied linked list:\nstart1");
while (p!=NULL)
{
    printf("->%d(%u)",p->data,p);
    p=p->next;
}
return 0;
}
