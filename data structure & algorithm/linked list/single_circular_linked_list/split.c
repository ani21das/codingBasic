#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start,*last,*p,*temp,*start1,*start2,*last1,*last2;
int n,m,i,element,t,loc;

void listmake();
void display();
void nth_traverse();

int main()
{
  printf("\nEnter total no of nodes in the list:");
  scanf("%d",&n);
  m=n;
  listmake();
  printf("Entered linked list:\nstart");
  p=start;
  display();
  p=start;
  nth_traverse();

  printf("\nSplit at node no:");
  scanf("%d",&loc);
  i=1;
  p=start;
  while(i<loc)
  {
      p=p->next;
      i++;
  }
  
 start1=start;
 last1=p;
 p=p->next;
 last1->next=start1;

 start2=p;
 last2=last;
 last2->next=start2;

 printf("\n1st Split nodes are:\nstart1->");
 p=start1;
 start=start1;
 display();
 p=start1;
 n=loc;
 nth_traverse();


 printf("\n2nd Split nodes are:\nstart2->");
 p=start2;
 start=start2;
 display();
 p=start2;
 n=m-loc;
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
    printf("\nNumber of times traverse the list circularly=");
    scanf("%d",&t);
    printf("Traversing circularly for %d times:\nstart",t);
    for(i=1;i<=t*n;i++)
    {
        printf("->%d ",p->data);
        p=p->next;
    }
   return;
}