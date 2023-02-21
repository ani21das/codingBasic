#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main(int argc, char const *argv[])
{
    struct node *p,*temp,*start;
    int n,i,element,x,loc;
    printf("Enter total no of nodes:");
    scanf("%d",&n);
    i=1;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Insufficient memory!!");
        return 0;
    }
    else
    {
        printf("Enter value at node no %d :",i);
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
            printf("Insufficient memory!!");
            return 0;
        }
        else
        {
            printf("Enter value at node no %d :",i);
            scanf("%d",&element);
            temp->data=element;
            temp->next=NULL;
            p->next=temp;
            p=p->next;
        }
    }
    p=start;
    printf("Entered linked list:n start");
    while(p!=NULL)
    {
        printf("->%d",p->data);
        p=p->next;
    }
 printf("\n Enter position no of node where new value be inserted:");
 scanf("%d",&loc);
 p=start;
 i=1;
 while (i<loc-1)
 {
  p=p->next;
  i=i+1;  
 }
temp=(struct node*)malloc(sizeof(struct node));
if(temp==NULL)
{
    printf("Insufficient memory!!");
    return 0;
}
else
{
    printf("Enter a new value for position of node no %d:",loc);
    scanf("%d",&element);
    temp->data=element;
    if(loc>1)
    {
        temp->next=p->next;
        p->next=temp;
    }
    else
    {
      temp->next=p;
      start=temp;
    }
}
p=start;
printf("Modified linked list:\n Start");
while (p!=NULL)
{
    printf("->%d",p->data);
    p=p->next;
}
return 0;
}
