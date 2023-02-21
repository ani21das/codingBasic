#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *prev;
};

void push();
void pop();
void traverse();

struct node *p,*temp,*top=NULL;
int c,element;

int main(int argc, char const *argv[])
{
    do
    {
     printf("Enter your choice from these\n\t\t1.PUSH\n\t\t2.POP\n\t\t3.TRAVERSE\n\t\t4.EXIT");
     printf("\nYour choice is :");
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
             printf("EXIT!!");
             break;
      default:
             printf("Wrong Choice!!");
     }
    } while (c!=4);
    return 0;
  } 

    void push()
    {
      temp=(struct node*)malloc(sizeof(struct node));
      if(temp == NULL)
      {
         printf("Stack is full !!\n");
         return;
      }
      else
      {
          printf("Enter the element to be inserted :");
          scanf("%d",&element);
          temp->data=element;
          temp->prev=top;
          top=temp;
      }
       printf("\n*After PUSH operation*\n");
       traverse();
       
      return;
    }

    void pop()
    {
        if(top == NULL)
        {
            printf("Stack is empty\n");
            return;
        }
        else
        {
            element=top->data;
            temp=top;
            top=temp->prev;
            free(temp);
        }
        printf("\n*After POP operation*\n");
        traverse();

        return;
    }

    void traverse()
    {
      if(top == NULL)
      {
          printf("Stack is empty!!\n");
          return;
      }
      else
      {
          printf("\n Stack is :\n");
          p=top;
          while (p != NULL)
          {
            printf("%d\n",p->data);
            p=p->prev;
          }
       }
      return;
    }
