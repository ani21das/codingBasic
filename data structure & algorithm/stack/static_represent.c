#include<stdio.h>
#define MAXSIZE 5

int stack[MAXSIZE],top=-1,c,element,i;
float freesize;

void push();
void pop();
void traverse();

int main()
{
    do
    {
      printf("\n\nEnter your choice from these \n\t\t1.PUSH \n\t\t2.POP \n\t\t3.TRAVERSE \n\t\t4.EXIT");
      printf("\nYour choice is : ");
      scanf("%d",&c);
      switch(c)
      {
          case 1:
           push();
           break;
          case 2:
           pop();
           break;
          case 3:
           traverse();
           break;
          case 4:
           printf("\n\t\t\t *EXIT*\n");
           break;
          default:
           printf("\nWRONG CHOICE!!\n");
      }
    } while (c!=4);
   return 0; 
}

void push()
{
    printf("\n\t\t** PUSH OPERATION **");
    if(top == MAXSIZE-1)
    {
        printf("\n\t\t\tStack is full !!\n");
        return;
    }
    else
    {
        top=top+1;
        printf("\n\nEnter the element to be inserted:");
        scanf("%d",&element);
        stack[top]=element;
    }
     printf("\n\nAfter adding the element %d into stack :)",element);
     traverse();
     return;
}

void pop()
{
    printf("\n** POP OPERATION **");
    if(top<0)
    {
        printf("\n\t\t\tStack is empty!!\n");
    }
    else
    {
        element=stack[top];
        top=top-1;
    }
    printf("\n\nAfter removed the element %d from the stack :(",element);
    traverse();
    return;
}

void traverse()
{
    if(top<0)
    {
        printf("\n\t\t\tStack is empty!!");
    }
    else
    {
        printf("\nElements available in the Stack are :\n");
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }  
    }

    freesize=((float)(MAXSIZE-(top+1))/MAXSIZE)*100;
    printf("\navailable freesize = ");
    printf("%3.1f[%%] stack is empty\n",freesize);
    return;
  }