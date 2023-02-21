#include<stdio.h>
#include<stdlib.h>

struct node
           {
               int data;
               struct node *next;
           };

int n,i,element,loc,t,c,r,m,count=0;
struct node *p,*p1,*temp,*start,*last,*start1,*last1,*start2,*last2,*start3;

void listmake();
void display();
void nth_traverse();
void insertion();
void final_insert();
void deletion();
void final_deletion();
void merge();
void final_merge();
void split();
void final_split();
void copy();
void final_copy();
void add();

int main()
{
  printf("\nHow many node do you want in list:");
  scanf("%d",&n);
  m=n;
  listmake();
  p=start;
  printf("Entered linked list:\nstart");
  display();
  do{
  printf("\n\nEnter your choice from these:\n\t\t\t\t1.Insertion\n\t\t\t\t2.Deletion\n\t\t\t\t3.Merge\n\t\t\t\t4.Split\n\t\t\t\t5.Copy\n\t\t\t\t6.EXIT\n\n\t\t\t\t:");
  scanf("%d",&c);
  switch (c)
  {
  case 1:
         final_insert();
         add();
         break;
  case 2:
         final_deletion();
         add();
         break;
  case 3:
         final_merge();
         add();
         break;
  case 4:
         final_split();
         add();
         break;
  case 5:
         final_copy();
         break;       
 default:
         printf("WRONG INPUT!!\n\t\tENTER FROM 1 TO 6 ONLY :)");
     }
  }while(c!=6);
  return 0;
}

 void final_insert()
         {
         insertion();
         p=start;
         printf("\nAfter insertion,the modified linked list:\nstart");
         display();
         p=start;
         n=n+1;
         m=n;
         nth_traverse();
         return;
         }

 void insertion()
    {      
           printf("\nEnter position no of node where new value be inserted:");
           scanf("%d",&loc);
           i=1;
           p=start;
           while (i<loc-1)
           {
              p=p->next;
              i=i+1;
           }

         temp=(struct node*)malloc(sizeof(struct node));
         if(temp==NULL)
         {
         printf("Insufficient Memory!!");
         return;
         }
         else
         {
           printf("Enter the new value at node no %d:",loc);
           scanf("%d",&element);
           temp->data=element;
           if(loc>1)
           {
             if(p->next!=start)
             {
               temp->next=p->next;
               p->next=temp;
             }
             else
             {
               temp->next=p->next;
               p->next=temp;
               last=temp;
             }
           }
           else
           {
             temp->next=p;
             start=temp;
             last->next=start;
           }
         }
          return;
         }

void final_deletion()
         {
         deletion();
         p=start;
         printf("\nAfter deletion,the modified linked list:\nstart");
         display();
         p=start;
         n=n-1;
         m=n;
         nth_traverse();
         return;
         }

void deletion()
         {
           printf("Enter the position from where do you want to delete node:");
           scanf("%d",&loc);
           p=start;
           i=1;
           while(i<loc)
           {
              temp=p;
              p=p->next;
              i=i+1;
           }

           if(loc>1)
           {
              if(p->next!=start)
              {
                temp->next=p->next;
              }
              else
              {
                temp->next=p->next;
                last=temp;     
              }
           }
           else
           {
             start=p->next;
             last->next=start;  
           }
           free(p);
           return;
         }

 void final_merge()
  {
  merge();
  printf("\nMerged linked list:\nstart");
  p=start1;
  start=start1;
  display();
  p=start1;
  n=(m+r);
  m=n;
  nth_traverse();
  return;
  }

void merge()
 {
  start1=start;
  last1=last;
  
  printf("\nEnter total no of nodes which is going to be merged with previuos node:");
  scanf("%d",&n);
  r=n;
  listmake();
  start2=start;
  last2=last;

  printf("\nEntered 1st linked list:\nstart1");
  p=start1;
  start=start1;
  display();

  printf("\nEntered 2nd linked list:\nstart2");
  p=start2;
  start=start2;
  display();

  last1->next=start2;
  last2->next=start1;

  return;
  }

void final_split()
{
 split();
 printf("\n1st Split nodes are:\nstart1");
 p=start1;
 start=start1;
 display();
 p=start1;
 n=loc;
 nth_traverse();

 printf("\n2nd Split nodes are:\nstart2");
 p=start2;
 start=start2;
 display();
 p=start2;
 n=m-loc;
 nth_traverse();


 return;
}

void split()
  {
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
 return;
}

void final_copy()
{
copy();
p=start3;
start=start3;
printf("\nCopied linked list:\nstart");
display();
p=start3;
start=start3;
n=count;
nth_traverse();
return;
}

void copy()
{
  start3=(struct node*)malloc(sizeof(struct node));
    if(start3==NULL)
    {
      printf("Insufficient Memory!!");
      return;
    }
    else
    {
      p=start;
      p1=start3;
      p1->data=p->data;
      p1->next=NULL;
    }
    p=start;
    count=1;
  do
  {
    p=p->next;

    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
      printf("Insufficient Memory!!");
      return;
    }
    else
    {
      temp->data=p->data;
      temp->next=NULL;
      p1->next=temp;
      p1=p1->next;
    }
     last1=p1;
     last1->next=start3;
     count++;
   }while(p->next!=start);  
   return;
}


void listmake()
{
 i=1;
 temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Insufficient Memory!!");
        return;
    }
    else
    {
        printf("Enter value at node no %d:",i);
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
         return;
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
         last=temp;
         last->next=start;
        
         return;
        }

void display()
    {
       do
       {
         printf("->%d ",p->data);
         p=p->next;
       } while (p!=start);
       return;
    }

  void nth_traverse()
           {
           printf("\nNumber of times traverse the list circularly=");
           scanf("%d",&t);
           printf("\nTraversing circularly for %d times:\nstart",t);
           for(i=1;i<=t*n;i++)
           {
                  printf("->%d ",p->data);
                  p=p->next;
           }
           return;
    }

  void add()
  {
    int sum=0;
    p=start;
    do
    {
      sum+=(p->data);
      p=p->next;
    }while(p->next!=start);
    
    printf("\nAddition of all data element present in the list=%d",sum+(p->data));
    return;
  }

    
         

         

         
       
 

 

  








    