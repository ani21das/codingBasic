#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
int main()
{
    struct node *p,*temp,*start,*last;
    int n,i,element,x,flag;
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

   last=temp;
   last->next=start;

    p=start;
    printf("Entered linked list:n start");
    do
    {
        printf("->%d",p->data);
        p=p->next;
    }while(p!=start);

    printf("\n find the element =");
    scanf("%d",&x);
    p=start;
    i=1;
    flag=0;
   do
    {
        if(x==p->data)
        {
            flag=1;
            break;
        }
        p=p->next;
        i=i+1;
    }while(p!=start);
    
    if(flag==1)
    {
     printf("%d is at node no %d",x,i);
    }
    else
    {
        printf("%d is at not in the list",x);
    }
   return 0;
}