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
    printf("Entered linked list:\nstart");
    while(p!=NULL)
    {
        printf("->%d",p->data);
        p=p->next;
    }

    p=start;
    i=1;
    temp=(struct node*)malloc(sizeof(struct node));
       if(temp==NULL)
       {
           printf("Insufficient Memory!!");
           return 0;
       }
    
    else
     {
         printf("Enter the value of element to be inserted at beginning(node no %d):",i);
         scanf("%d",&element);
         temp->data=element;
         temp->next=p;
         start=temp;
     }

    p=start;
    printf("\nModified linked list:\nstart");
    while(p!=NULL)
    {
        printf("->%d",p->data);
        p=p->next;
    }
    return 0;
}