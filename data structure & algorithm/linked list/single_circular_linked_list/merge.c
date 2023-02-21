#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start,*last,*p,*temp,*start1,*start2,*last1,*last2;
int n,m,r,i,element,t;

void listmake();
void display();
void nth_traverse();

int main()
{
  printf("\nEnter total no of nodes in 1st list:");
  scanf("%d",&n);
  m=n;
  listmake();
  start1=start;
  last1=last;

  printf("\nEnter total no of nodes in 2nd list:");
  scanf("%d",&n);
  r=n;
  listmake();
  start2=start;
  last2=last;

  printf("\nEntered 1st linked list:\n");
  p=start1;
  start=start1;
  display();

  
  printf("\nEntered 2nd linked list:\n");
  p=start2;
  start=start2;
  display();

  last1->next=start2;
  last2->next=start1;

  printf("\nMerged linked list:\n");
  p=start1;
  start=start1;
  display();

  printf("\nNumber of times traverse the list circularly=");
  scanf("%d",&t);
  printf("Traversing circularly for %d times:\nstart",t);
  p=start1;
  nth_traverse();
  return 0;
}

void listmake()
{
  i=1;
  temp=(struct node*)malloc(sizeof(struct node));
  if(temp==NULL)
  {
    printf("Insufficient Memory!!");
  
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

  for (i=2;i<=n;i++)
  {
  temp=(struct node*)malloc(sizeof(struct node));
  if(temp==NULL)
  {
    printf("Insufficient Memory!!");
    
  }
  else
  {
    printf("\nEnter value at node no %d:",i);
    scanf("%d",&element);
    temp->data=element;
    temp->next=NULL;

    p->next=temp;
    p=p->next;
  }
}
  last=temp;
  last->next=start;
  return;
}

void display()
{
  do
   {
       printf("->%d",p->data);
       p=p->next;
   }while(p!=start);
    
  return;
}

void nth_traverse()
{
    for(i=1;i<=t*(r+m);i++)
    {
        printf("->%d ",p->data);
        p=p->next;
    }
   return;
}