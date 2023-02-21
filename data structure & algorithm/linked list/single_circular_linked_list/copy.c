#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

struct node *start,*last,*p,*p1,*temp,*start1,*start2,*last1,*last2;
int n,i,element;

void listmake();
void display();

int main()
{
 printf("Enter total no of nodes:");
 scanf("%d",&n);
 listmake();
 printf("Entered linked list:\nstart");
 p=start;
 display();

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
p=start;

do
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
  last1=p1;
  last1->next=start1;
}while(p->next!=start);

p=start1;
start=start1;
printf("\nCopied linked list:\nstart1");
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
       printf("->%d (%u)",p->data,p);
       p=p->next;
   }while(p!=start);
    
  return;
}
