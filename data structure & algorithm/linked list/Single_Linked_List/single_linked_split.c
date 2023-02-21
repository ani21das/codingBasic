#include<stdio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *next;
};
int main(int argc, char const *argv[])
{
    struct node *p,*temp,*start,*start1,*start2;
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
   p=start;
   printf("Enter linked list:\nstart");
   while(p!=NULL)
   {
       printf("->%d",p->data);
       p=p->next;
   }

  printf("Split at node no:");
  scanf("%d",&loc);
  i=1;
  start1=start;
  p=start;
  while(i<loc)
  {
      p=p->next;
      i++;
  }

 start2=p->next;
 p->next=NULL;
 
 printf("Splited lists are:\n");
 p=start1;
 printf("start1");
 while(p!=NULL)
 {
    printf("->%d",p->data);
    p=p->next;
 }
 
 p=start2;
 printf("\nstart2");
 while(p!=NULL)
 {
    printf("->%d",p->data);
    p=p->next;
 }
 return 0;
}

