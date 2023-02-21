#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
 struct node *p,*start,*temp;
  int i,n,element,loc,c; 
  
  void insertion();
  void deletion();
  void display();

int main(int argc, char const *argv[])
{
  printf("Enter total number of node:");
  scanf("%d",&n);
  i=1;
  temp=(struct node*)malloc(sizeof(struct node));
  if(temp==NULL)
  {
      printf("Insufficient Memory!!");
      return 0;
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

    for(i=2;i<=n;i++)
    {
      
       temp=(struct node*)malloc(sizeof(struct node));
       if(temp==NULL)
     {
      printf("Insufficient Memory!!");
      return 0;
     }
  else
     {
      printf("Enter value at node no %d:",i);
      scanf("%d",&element);
      temp->data=element;
      temp->next=NULL;

      p->next=temp;
      p=p->next;
     }
   }

   p=start;
   printf("Enter linked list:\nstart");
   while(p!=NULL)
   {
       printf("->%d",p->data);
       p=p->next;
   }
  
  do
  {
    printf("\nEnter choice(1.Insertion,2.deletion,3.Exit):");
    scanf("%d",&c);
    switch(c)
    {
    case 1:
           insertion();
           display(); 
           break;
    case 2:
           deletion();
           display();
           break;
    default:
           printf("wrong input!!(Enter only 1 or 2)");
    }
  } while(c!=3);

  return 0;
}
   void insertion()
   {
      printf("\nEnter position no to insert new value:");
      scanf("%d",&loc);
      p=start;
      i=1;
      while(i<loc-1)
      {
          p=p->next;
          i++;
      }
      temp=(struct node*)malloc(sizeof(struct node));
      if(temp==NULL)
      {
        printf("Insufficient Memory!!");
        return;
      }
      else
      {
          printf("\nEnter value at node no %d:",loc);
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
  
    return;
   }

   void deletion()
   {
      printf("Enter position of node where you want to delete element data:");
      scanf("%d",&loc);
      p=start;
      i=1;

      while(i<loc)
      {
        temp=p;
        p=p->next;
        i++;
      }

      if(loc>1)
      {
         temp->next=p->next;
         free(p);  
      }
  else
     {
        start=p->next;
        free(p);  
     }
    return;
   }

   void display()
   {
     p=start;
     printf("Modified linked list:\nstart");
     while(p!=NULL)
   {
       printf("->%d",p->data);
       p=p->next;
   }
   return;
   }
