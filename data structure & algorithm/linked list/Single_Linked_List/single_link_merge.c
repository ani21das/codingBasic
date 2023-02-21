#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start,*p,*temp,*start1,*start2;
int n,i,element;

void listmake();
void display();

int main()
{
  printf("Enter total no of nodes in 1st list:");
  scanf("%d",&n);
  listmake();
  start1=start;

  printf("\nEnter total no of nodes in 2nd list:");
  scanf("%d",&n);
  listmake();
  start2=start;

  p=start1;
  printf("\nEntered 1st linked list:\n");
  display();

  p=start2;
  printf("\nEntered 2nd linked list:\n");
  display();

  p=start1;
  while(p->next!=NULL)
  {
    p=p->next;
  }
  p->next=start2;

  p=start1;
  printf("\nMerged linked list:");
  display();

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

  for (i = 2; i <= n; i++)
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
return;
}

void display()
{
  while(p!=NULL)
  {
    printf("->%d",p->data);
    p=p->next;
  }
  return ;
}