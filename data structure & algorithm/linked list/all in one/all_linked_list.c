#include<stdio.h>
#include<stdlib.h>

struct node
           {
               int data;
               struct node *next;
           };

struct node2
          {
            struct node2 *prev2;
            int data2;
            struct node2 *next2;
          };

int n,i,element,loc,t,c,r,m,count=0,c1,c2,c3,c4;
struct node *p,*p1,*temp,*start,*last,*start1,*last1,*start2,*last2,*start3;

int dn,di,delement,dloc,dt,dc,dr,dm,dcount=0;
struct node2 *dp,*dp1,*dtemp,*dstart,*dlast,*dstart1,*dlast1,*dstart2,*dlast2,*dstart3,*dlast3;


void single();
void listmake_single();
void display_single();
void insertion_single();
void final_insert_single();
void deletion_single();
void final_deletion_single();
void merge_single();
void final_merge_single();
void split_single();
void final_split_single();
void copy_single();
void final_copy_single();
void add_single();
void biggest_single();
void smallest_single();



void single_circular();
void listmake_single_circular();
void display_single_circular();
void nth_traverse_single_circular();
void insertion_single_circular();
void final_insert_single_circular();
void deletion_single_circular();
void final_deletion_single_circular();
void merge_single_circular();
void final_merge_single_circular();
void split_single_circular();
void final_split_single_circular();
void copy_single_circular();
void final_copy_single_circular();
void add_single_circular();
void biggest_single_circular();
void smallest_single_circular();


void doubly();
void listmake_doubly();
void display_doubly_forward();
void display_doubly_backward();
void insertion_doubly();
void final_insert_doubly();
void deletion_doubly();
void final_deletion_doubly();
void merge_doubly();
void final_merge_doubly();
void split_doubly();
void final_split_doubly();
void copy_doubly();
void final_copy_doubly();
void add_doubly();
void biggest_doubly();
void smallest_doubly();


void doubly_circular();
void listmake_doubly_circular();
void display_doubly_circular_forward();
void display_doubly_circular_backward();
void nth_traverse_doubly_circular();
void insertion_doubly_circular();
void final_insert_doubly_circular();
void deletion_doubly_circular();
void final_deletion_doubly_circular();
void merge_doubly_circular();
void final_merge_doubly_circular();
void split_doubly_circular();
void final_split_doubly_circular();
void copy_doubly_circular();
void final_copy_doubly_circular();
void add_doubly_circular();
void biggest_doubly_circular();
void smallest_doubly_circular();



int main()
{
 do
  {
    printf("\n\nWhich operation should you want to perform from Linked List:\n");
    printf("\nEnter your choice  from these:\n\t\t\t\t1.SINGLE LINKED LIST\n\t\t\t\t2.SINGLE CIRCULAR LINKED LIST\n\t\t\t\t3.DOUBLY LINKED LIST\n\t\t\t\t4.DOUBLY CIRCULAR LINKED LIST\n\t\t\t\t5.EXIT\n\n\t\t\t\tEntered choice is:");
    scanf("%d",&c);
    switch(c)
    {
  case 1:
         single();
         break;
         exit;
  case 2:
         single_circular();
         break;
         exit;
  case 3:
         doubly();
         break;
         exit;
  case 4:
         doubly_circular();
         break;
         exit;
  default:
         printf("\t\tWRONG INPUT!!\n\t\tENTER FROM 1 TO 5 ONLY :)");
         break;
    }
 } while (c!=5);

 return 0;
 
}



//Single linked list


void single()
{
  int biggest,smallest;
  printf("\n\t\t\t***FOR SINGLE LINKED LIST***");
  printf("\n\nHow many node do you want in list:");
  scanf("%d",&n);
  listmake_single();
  p=start;
  printf("Entered linked list:\n\nstart");
  display_single();
  
  do{
  printf("\n\nEnter your choice from these:\n\t\t\t\t1.INSERTION\n\t\t\t\t2.DELETION\n\t\t\t\t3.MERGING\n\t\t\t\t4.SPLITING\n\t\t\t\t5.COPYING\n\t\t\t\t6.EXIT\n\n\t\t\t\t:");
  scanf("%d",&c1);
  switch (c1)
  {
  case 1:
         final_insert_single();
         break;
  case 2:
         final_deletion_single();
         break;
  case 3:
         final_merge_single();
         break;
  case 4:
         final_split_single();
         break;
  case 5:
         final_copy_single();
         break;       
 default:
         printf("\t\tWRONG INPUT!!\n\t\tENTER FROM 1 TO 6 ONLY :)");
     }
  }while(c1!=6);
  return;
}

void final_insert_single()
         {
         insertion_single();
         p=start;
         printf("\n\nAfter insertion,the modified linked list:\n\nstart");
         display_single();
         p=start;
         add_single();
         p=start;
         biggest_single();
         p=start;
         smallest_single();
         return;
         }

 void insertion_single()
 {      
 printf("\n\nEnter position no of node where new value be inserted:");
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
    return;
}
else
{
    printf("\n\nEnter a new value for position of node no %d:",loc);
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

void final_deletion_single()
         {
         deletion_single();
         p=start;
         printf("\n\nAfter deletion,the modified linked list:\n\nstart");
         display_single();
         p=start;
         add_single();
         p=start;
         biggest_single();
         p=start;
         smallest_single();
         return;
         }

void deletion_single()
{
   printf("\n\nEnter position node no to delete value:");
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
   }
else
    {
      start=p->next;
    }   

    free(p);
    return;
}

void final_merge_single()
  {
  merge_single();
  printf("\n\nMerged linked list:\n\nstart");
  p=start;
  display_single();
  p=start;
  add_single();
  p=start;
  biggest_single();
  p=start;
  smallest_single();
  start=start1;
  return;
  }

void merge_single()
 {
  start1=start;
  printf("\n\nEnter total no of nodes which is going to be merged with previuos node:");
  scanf("%d",&n);
  listmake_single();
  start2=start;

  printf("\n\nEntered 1st linked list:\n\nstart1");
  p=start1;
  display_single();

  printf("\n\nEntered 2nd linked list:\n\nstart2");
  p=start2;
  display_single();

   p=start1;
  while(p->next!=NULL)
  {
    p=p->next;
  }
  p->next=start2;
  start=start1;
  return;
  }

void final_split_single()
{
 split_single();
 printf("\n\n1st Split nodes are:\n\nstart1");
 p=start1;
 display_single();
 p=start1;
 add_single();
 start=start1;
 p=start;
 biggest_single();
 start=start1;
 p=start;
 smallest_single();

 printf("\n\n2nd Split nodes are:\n\nstart2");
 p=start2;
 display_single();
 p=start2;
 add_single();
 start=start2;
 p=start;
 biggest_single();
 start=start2;
 p=start;
 smallest_single();
 
 start=start2;
 
 return;
}

void split_single()
  {
  printf("\n\nSplit at node no:");
  scanf("%d",&loc);
  i=1;
  p=start;
  while(i<loc)
  {
      p=p->next;
      i++;
  }
 start1=start; 
 start2=p->next;
 p->next=NULL;
 
 return;
}

void final_copy_single()
{
copy_single();
p=start3;
printf("\n\nCopied linked list:\n\nstart");
display_single();

start=start3;
p=start;
biggest_single();
start=start3;
p=start;
smallest_single();

return;
}

void copy_single()
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

while(p->next!=NULL)
{
    p=p->next;
    
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Insufficient memory!");
        return;
    }
  else
  {
      temp->data=p->data;
      temp->next=NULL;

      p1->next=temp;
      p1=p1->next;
  }
}

return;
}

void listmake_single()
{
    i=1;
    temp=(struct node*)malloc(sizeof(struct node));
    if(temp==NULL)
    {
        printf("Insufficient memory!!");
        return;
    }
  else
  {
      printf("\n\nEnter value at node no %d:",i);
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
      return;
  }
 else
  {
    printf("\n\nEnter value at node no %d:",i);
    scanf("%d",&element);
    temp->data=element;
    temp->next=NULL;
    p->next=temp;
    p=p->next;
  }
}
 
return;
}

void display_single()
    {
   while(p!=NULL)
   {
       printf("->%d ",p->data);
       p=p->next;
   }

   return;
   }


void add_single()
  {
    int sum=0;
    //p=start;
    while(p!=NULL)
    
    {
      sum+=(p->data);
      p=p->next;
    }
    printf("\n\nAddition of all data element present in the list=%d",sum);
    return;
  }


void biggest_single()
{
  int biggest;

  biggest=p->data;

  while(p!=NULL)
  {
    if(biggest <= (p->data))
    {
      biggest=p->data;
    }
    p=p->next;
  }

  printf("\n\nBiggest number is in the list=%d",biggest);
  return;
}

void smallest_single()
{
  int smallest;

  smallest=p->data;

  while(p!=NULL)
  {
    if(smallest >= (p->data))
    {
      smallest=p->data;
    }
    p=p->next;
  }

  printf("\n\nSmallest number is in the list=%d",smallest);
  return;
}


//single circular linked list operations

void single_circular()
{
  printf("\n\t\t\t***SINGLE CIRCULAR LINKED LIST***");
  printf("\n\nHow many node do you want in list:");
  scanf("%d",&n);
  m=n;
  listmake_single_circular();
  p=start;
  printf("\n\nEntered linked list:\n\nstart");
  display_single_circular();
  do{
   printf("\n\nEnter your choice from these:\n\t\t\t\t1.INSERTION\n\t\t\t\t2.DELETION\n\t\t\t\t3.MERGING\n\t\t\t\t4.SPLITING\n\t\t\t\t5.COPYING\n\t\t\t\t6.EXIT\n\n\t\t\t\t:");
  scanf("%d",&c2);
  switch (c2)
  {
  case 1:
         final_insert_single_circular();
         break;
  case 2:
         final_deletion_single_circular();
         break;
  case 3:
         final_merge_single_circular();
         break;
  case 4:
         final_split_single_circular();
         break;
  case 5:
         final_copy_single_circular();
         break;       
 default:
         printf("\t\tWRONG INPUT!!\n\t\tENTER FROM 1 TO 5 ONLY :)");
     }
  }while(c2!=6);
  return;
}

 void final_insert_single_circular()
         {
         insertion_single_circular();
         p=start;
         printf("\n\nAfter insertion,the modified linked list:\n\nstart");
         display_single_circular();
         p=start;
         n=n+1;
         m=n;
         nth_traverse_single_circular();
         p=start;
         add_single_circular();
         p=start;
         biggest_single_circular();
         p=start;
         smallest_single_circular();
         return;
         }

 void insertion_single_circular()
    {      
           printf("\n\nEnter position no of node where new value be inserted:");
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
           printf("\n\nEnter the new value at node no %d:",loc);
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

void final_deletion_single_circular()
         {
         deletion_single_circular();
         p=start;
         printf("\n\nAfter deletion,the modified linked list:\n\nstart");
         display_single_circular();
         p=start;
         n=n-1;
         m=n;
         nth_traverse_single_circular();
         p=start;
         add_single_circular();
         p=start;
         biggest_single_circular();
         p=start;
         smallest_single_circular();
         return;
         }

void deletion_single_circular()
         {
           printf("\n\nEnter the position from where do you want to delete node:");
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

 void final_merge_single_circular()
  {
  merge_single_circular();
  printf("\n\nMerged linked list:\n\nstart");
  p=start1;
  start=start1;
  display_single_circular();
  p=start1;
  n=(m+r);
  m=n;
  nth_traverse_single_circular();
  p=start1;
  add_single_circular();
  start=start1;
  p=start;
  biggest_single_circular();
  start=start1;
  p=start;
  smallest_single_circular();
  start=start1;
  return;
  }

void merge_single_circular()
 {
  start1=start;
  last1=last;
  
  printf("\n\nEnter total no of nodes which is going to be merged with previuos node:");
  scanf("%d",&n);
  r=n;
  listmake_single_circular();
  start2=start;
  last2=last;

  printf("\n\nEntered 1st linked list:\n\nstart1");
  p=start1;
  start=start1;
  display_single_circular();

  printf("\n\nEntered 2nd linked list:\n\nstart2");
  p=start2;
  start=start2;
  display_single_circular();

  last1->next=start2;
  last2->next=start1;

  return;
  }

void final_split_single_circular()
{
 split_single_circular();

 printf("\n\n1st Split nodes are:\n\nstart1");
 p=start1;
 start=start1;
 display_single_circular();
 p=start1;
 n=loc;
 nth_traverse_single_circular();
 p=start1;
 add_single_circular();
  start=start1;
  p=start;
  biggest_single_circular();
  start=start1;
  p=start;
  smallest_single_circular();


 printf("\n\n2nd Split nodes are:\n\nstart2");
 p=start2;
 start=start2;
 display_single_circular();
 p=start2;
 n=m-loc;
 nth_traverse_single_circular();
p=start2;
add_single_circular();
  start=start2;
  p=start;
  biggest_single_circular();
  start=start2;
  p=start;
  smallest_single_circular();

 start=start2;
 return;
}

void split_single_circular()
  {
  printf("\n\nSplit at node no:");
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

void final_copy_single_circular()
{
copy_single_circular();
p=start3;
start=start3;
printf("\n\nCopied linked list:\n\nstart");
display_single_circular();
p=start3;
start=start3;
n=count;
nth_traverse_single_circular();
start=start3;
p=start;
biggest_single_circular();
start=start3;
p=start;
smallest_single_circular();
return;
}

void copy_single_circular()
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
     count++;
   }while(p->next!=start);  

     last1=p1;
     last1->next=start3;   
   return;
}


void listmake_single_circular()
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
        printf("\n\nEnter value at node no %d:",i);
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
          printf("\n\nEnter value at node no %d:",i);
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

void display_single_circular()
    {
       do
       {
         printf("->%d ",p->data);
         p=p->next;
       } while (p!=start);
       return;
    }

  void nth_traverse_single_circular()
           {
           printf("\n\nNumber of times traverse the list circularly=");
           scanf("%d",&t);
           printf("\n\nTraversing circularly for %d times:\n\nstart",t);
           for(i=1;i<=t*n;i++)
           {
                  printf("->%d ",p->data);
                  p=p->next;
           }
           return;
    }

  void add_single_circular()
  {
    int sum=0;
    //p=start;
    do
    {
      sum+=(p->data);
      p=p->next;
    }while(p!=start);

    printf("\n\nAddition of all data element present in the list=%d",sum);
    return;
  }


void biggest_single_circular()
{
  int biggest;

  biggest=p->data;

  do
  {
    if(biggest <= (p->data))
    {
      biggest=p->data;
    }
    p=p->next;
  }while(p!=start);

  printf("\n\nBiggest number is in the list=%d",biggest);
  return;
}

void smallest_single_circular()
{
 int smallest;

 smallest=p->data;

  do
  {
    if(smallest >= (p->data))
    {
      smallest=p->data;
    }
    p=p->next;
  }while(p!=start);

  printf("\n\nSmallest number is in the list=%d",smallest);
  return;
}


//Doubly linked list



void doubly()
{
  printf("\n\t\t\t***DOUBLY LINKED LIST***");
  printf("\n\nHow many node do you want in list:");
  scanf("%d",&dn);
  dm=dn;
  listmake_doubly();
  printf("\n\nEnter linked list forwardly:\n\nstart");
  dp=dstart;
  display_doubly_forward();
  printf("->last");
  printf("\n\nEnter linked list backwardly:\n\nlast");
  dp=dlast;
  display_doubly_backward();
  printf("->start");
  do{
   printf("\n\nEnter your choice from these:\n\t\t\t\t1.INSERTION\n\t\t\t\t2.DELETION\n\t\t\t\t3.MERGING\n\t\t\t\t4.SPLITING\n\t\t\t\t5.COPYING\n\t\t\t\t6.EXIT\n\n\t\t\t\t:");
  scanf("%d",&c3);
  switch (c3)
  {
  case 1:
         final_insert_doubly();
         break;
  case 2:
         final_deletion_doubly();
         break;
  case 3:
         final_merge_doubly();
         break;
  case 4:
         final_split_doubly();
         break;
  case 5:
         final_copy_doubly();
         break;       
 default:
         printf("\t\tWRONG INPUT!!\n\t\tENTER FROM 1 TO 6 ONLY :)");
     }
  }while(c3!=6);
  return;
}

void final_insert_doubly()
         {
         insertion_doubly();
         printf("\n\nAfter insertion,the modified linked list:\n\n");
         printf("\n\nEnter linked list forwardly:\n\nstart");
         dp=dstart;
         display_doubly_forward();
         printf("->last");
         printf("\n\nEnter linked list backwardly:\n\nlast");
         dp=dlast;
         display_doubly_backward();
         printf("->start");
         dp=dstart;
         add_doubly();
         dp=dstart;
         biggest_doubly();
         dp=dstart;
         smallest_doubly();

         return;
         }

 void insertion_doubly()
 {      
 printf("\n\nEnter position no of node where new value be inserted:");
 scanf("%d",&dloc);
 dp=dstart;
 di=1;
 while (di<dloc-1)
 {
  dp=dp->next2;
  di=di+1;  
 }
dtemp=(struct node2*)malloc(sizeof(struct node2));
if(dtemp==NULL)
{
    printf("Insufficient memory!!");
    return;
}
else
{
    printf("\n\nEnter a new value for position of node no %d:",dloc);
    scanf("%d",&delement);
    dtemp->data2=delement;

    if(dloc>1)
     {
         if(dp->next2!=NULL)
         {
         dtemp->next2=dp->next2;
         dtemp->prev2=dp;
         dp->next2=dtemp;
         dp=dtemp->next2;
         dp->prev2=dtemp;
        }
         else
         {
           dtemp->next2=dp->next2;
           dtemp->prev2=dp;
           dp->next2=dtemp;
           dlast=dtemp;
         }
     }
   else
    {
      dtemp->next2=dp;
      dtemp->prev2=NULL;
      dp->prev2=dtemp;
      dstart=dtemp;
    }
}
return;
}

void final_deletion_doubly()
         {
         deletion_doubly();
         printf("\n\nAfter deletion,the modified linked list:\n\n");
         printf("\n\nEnter linked list forwardly:\n\nstart");
         dp=dstart;
         display_doubly_forward();
         printf("->last");
         printf("\n\nEnter linked list backwardly:\n\nlast");
         dp=dlast;
         display_doubly_backward();
         printf("->start");
         dp=dstart;
         add_doubly();
         dp=dstart;
         biggest_doubly();
         dp=dstart;
         smallest_doubly();

         return;
         }

void deletion_doubly()
{
   dp=dstart;
   di=1;
   printf("\nnwhich node you want to delete:");
   scanf("%d",&dloc);
  
   while(di<dloc)
    {
        dtemp=dp;
        dp=dp->next2;
        di++;
    }

    if(dloc>1)
     {
       if(dp->next2!=NULL)
       {
        dp->prev2->next2=dp->next2;
        dp->next2->prev2=dp->prev2;
        free(dp);
       }
     else
     {
       dp->prev2->next2=NULL;
       dlast=dp->prev2;
       free(dp);
      }
    }

    else
    {
      dstart=dp->next2;
      free(dp);
      dstart->prev2=NULL;
    }
    return;
}

void final_merge_doubly()
  {
  merge_doubly();
  printf("\n\nMerged linked list:\n\n");
  printf("\n\nEnter linked list forwardly:\n\nstart");
  dp=dstart;
  display_doubly_forward();
  printf("->last");

  printf("\n\nEnter linked list backwardly:\n\nlast");
  dp=dlast;
  display_doubly_backward();
  printf("->start");

  dp=dstart;
  add_doubly();

  dp=dstart;
  biggest_doubly();
  dp=dstart;
  smallest_doubly();

  
  return;
  }

void merge_doubly()
 {
  dstart1=dstart;
  dlast1=dlast;
  printf("\n\nEnter total no of nodes which is going to be merged with previuos node:");
  scanf("%d",&dn);
  listmake_doubly();
  dstart2=dstart;
  dlast2=dlast;

         printf("\n\nEntered 1st linked list:\n\n");

         printf("\n\nEnter linked list forwardly:\n\nstart1");
         dp=dstart1;
         display_doubly_forward();
         printf("->last1");
         printf("\n\nEnter linked list backwardly:\n\nlast1");
         dp=dlast1;
         display_doubly_backward();
         printf("->start1");

  

  printf("\n\nEntered 2nd linked list:\n\n");
  dp=dstart2;
  printf("\n\nEnter linked list forwardly:\n\nstart2");
         dp=dstart2;
         display_doubly_forward();
         printf("->last2");
         printf("\n\nEnter linked list backwardly:\n\nlast2");
         dp=dlast2;
         display_doubly_backward();
         printf("->start2");

  dp=dstart1;
  while(dp->next2!=NULL)
  {
    dp=dp->next2;
  }
  dp->next2=dstart2;
  dstart2->prev2=dp;
  dlast=dlast2;
  dstart=dstart1;
  return;
  }

void final_split_doubly()
{
 split_doubly();

 printf("\n\n1st Split nodes are:\n\n");
  printf("\n\nEnter linked list forwardly:\n\nstart1");
  dp=dstart1;
  display_doubly_forward();
  printf("->last1");
  printf("\n\nEnter linked list backwardly:\n\nlast1");
  dp=dlast1;
  display_doubly_backward();
  printf("->start1");
  
  dp=dstart1;
  add_doubly();

  dstart=dstart1;
  dp=dstart;
  biggest_doubly();
  dstart=dstart1;
  dp=dstart;
  smallest_doubly();

 
 printf("\n\n2nd Split nodes are:\n\n");
 printf("\n\nEnter linked list forwardly:\n\nstart2");
  dp=dstart2;
  display_doubly_forward();
  printf("->last2");
  printf("\n\nEnter linked list backwardly:\n\nlast2");
  dp=dlast2;
  display_doubly_backward();
  printf("->start2");

  dp=dstart2;
  add_doubly();

  dstart=dstart2;
  dp=dstart;
  biggest_doubly();
  dstart=dstart2;
  dp=dstart;
  smallest_doubly();

 dstart=dstart2;
 return;
}

void split_doubly()
  {
  printf("\n\nSplit at node no:");
  scanf("%d",&dloc);
  di=1;
  dstart1=dstart;
  dp=dstart;
  while(di<dloc)
  {
      dp=dp->next2;
      di++;
  }
    dstart2=dp->next2;
    dstart2->prev2=NULL;
    dp->next2=NULL;
    dlast1=dp;
    dlast2=dlast;

    return;
}


void final_copy_doubly()
{
copy_doubly();
dp=dstart3;
printf("\n\nCopied linked list:\n\n");
printf("\n\nEnter linked list forwardly:\n\nstart");
  dp=dstart3;
  display_doubly_forward();
  printf("->last");
  printf("\n\nEnter linked list backwardly:\n\nlast");
  dp=dlast3;
  display_doubly_backward();
  printf("->start");

  dstart=dstart3;
  dp=dstart;
  biggest_doubly();
  dstart=dstart3;
  dp=dstart;
  smallest_doubly();

return;
}

void copy_doubly()
{
  dstart3=(struct node2*)malloc(sizeof(struct node2));
    if(dstart3==NULL)
    {
      printf("Insufficient Memory!!");
      return;
    }
    else
   {
      dp=dstart;
      dp1=dstart3;
      dp1->data2=dp->data2;
      dp1->prev2=NULL;
      dp1->next2=NULL;
   }

while(dp->next2!=NULL)
{
    dp=dp->next2;
    
    dtemp=(struct node2*)malloc(sizeof(struct node2));
    if(dtemp==NULL)
    {
        printf("Insufficient memory!");
        return;
    }
  else
  {
      dtemp->data2=dp->data2;
      dtemp->prev2=dp1;
      dtemp->next2=NULL;
      
      dp1->next2=dtemp;
      dp1=dp1->next2;
  }
}
dlast3=dp;

return;
}


void listmake_doubly()
{
    di=1;
    dtemp=(struct node2*)malloc(sizeof(struct node2));

        if(dtemp==NULL)
        {
            printf("Insufficient Memory!!");
            return;
        }
    else
        {
            printf("\n\nEnter value at node no %d:",di);
            scanf("%d",&delement);
            dtemp->data2=delement;
            dtemp->prev2=NULL;
            dtemp->next2=NULL;
            dp=dtemp;
        }

        dstart=dtemp;

        for(di=2;di<=dn;di++)
        {
           dtemp=(struct node2*)malloc(sizeof(struct node2));

        if(dtemp==NULL)
        {
            printf("Insufficient Memory!!");
            return;
        }
    else
       {
         printf("\n\nEnter value at node no %d:",di);
         scanf("%d",&delement);
         dtemp->data2=delement;
         dtemp->next2=NULL;
         dtemp->prev2=dp;
        
         dp->next2=dtemp;
         dp=dp->next2;
       }
    }
      dlast=dtemp;
 
return;
}

void display_doubly_forward()
    {
      while(dp!=NULL)
      {
          printf("->%d ",dp->data2);
          dp=dp->next2;
      }
       return;
    }

 
  void display_doubly_backward()   
  {
    while(dp!=NULL)
      {
          printf("->%d ",dp->data2);
          dp=dp->prev2;
      }   
       return;
    }


void add_doubly()
  {
    int dsum=0;
    while(dp!=NULL)
    {
      dsum=dsum+(dp->data2);
      dp=dp->next2;
    }
    
    printf("\n\nAddition of all data element present in the list=%d",dsum);
    return;
  }


  
void biggest_doubly()
{
  int biggest;

  biggest=dp->data2;

  while(dp!=NULL)
  {
    if(biggest <= (dp->data2))
    {
      biggest=dp->data2;
    }
    dp=dp->next2;
  }

  printf("\nBiggest number is in the list=%d",biggest);
  return;
}

void smallest_doubly()
{
  int smallest;

  smallest=dp->data2;

  while(dp!=NULL)
  {
    if(smallest >= (dp->data2))
    {
      smallest=dp->data2;
    }
    dp=dp->next2;
  }

  printf("\nSmallest number is in the list=%d",smallest);
  return;
}




//Doubly circular linked list

         

void doubly_circular()
{
  printf("\n\t\t\t***DOUBLY CIRCULAR LINKED LIST***");
  printf("\n\nHow many node do you want in list:");
  scanf("%d",&dn);
  dm=dn;
  listmake_doubly_circular();
  
  printf("\n\nEnter linked list forwardly:\n\nstart");
  dp=dstart;
  display_doubly_circular_forward();
  printf("->last");
  printf("\n\nEnter linked list backwardly:\n\nlast");
  dp=dlast;
  display_doubly_circular_backward();
  printf("->start");
  do{
   printf("\n\nEnter your choice from these:\n\t\t\t\t1.INSERTION\n\t\t\t\t2.DELETION\n\t\t\t\t3.MERGING\n\t\t\t\t4.SPLITING\n\t\t\t\t5.COPYING\n\t\t\t\t6.EXIT\n\n\t\t\t\t:");
  scanf("%d",&c4);
  switch (c4)
  {
  case 1:
         final_insert_doubly_circular();
         break;
  case 2:
         final_deletion_doubly_circular();
         break;
  case 3:
         final_merge_doubly_circular();
         break;
  case 4:
         final_split_doubly_circular();
         break;
  case 5:
         final_copy_doubly_circular();
         break;       
 default:
         printf("WRONG INPUT!!\n\t\tENTER FROM 1 TO 6 ONLY :)");
     }
  }while(c4!=6);
  return;
}

void final_insert_doubly_circular()
         {
         insertion_doubly_circular();
         printf("\n\nAfter insertion,the modified linked list:\n\n");
         printf("\n\nEnter linked list forwardly:\n\nstart");
         dp=dstart;
        display_doubly_circular_forward();
        printf("->last");
        printf("\n\nEnter linked list backwardly:\n\nlast");
        dp=dlast;
        display_doubly_circular_backward();
        printf("->start");
        
         dp=dstart;
         dn=dn+1;
         dm=dn;
         nth_traverse_doubly_circular();
         dp=dstart;
         add_doubly_circular();

         dp=dstart;
         biggest_doubly_circular();
         dp=dstart;
         smallest_doubly_circular();

         return;
         }

 void insertion_doubly_circular()
 {      
 printf("\n\nEnter position no of node where new value be inserted:");
 scanf("%d",&dloc);
 di=1;
 dp=dstart;
 while (di<dloc-1)
 {
  dp=dp->next2;
  di=di+1;  
 }
dtemp=(struct node2*)malloc(sizeof(struct node2));
if(dtemp==NULL)
{
    printf("Insufficient memory!!");
    return;
}
else
{
    printf("\n\nEnter a new value for position of node no %d:",dloc);
    scanf("%d",&delement);
    dtemp->data2=delement;
    dtemp->prev2=NULL;
    dtemp->next2=NULL;
    if(dloc>1)
     {
         if(dp->next2!=dstart)
         {
         dtemp->next2=dp->next2;
         dtemp->prev2=dp;
         dp->next2=dtemp;
         dp=dtemp->next2;
         dp->prev2=dtemp;
        }
         else
         {
           dtemp->next2=dp->next2;
           dtemp->prev2=dp;
           dp->next2=dtemp;
           dlast=dtemp;
           dstart->prev2=dlast;
         }
     }
   else
    {
      dtemp->next2=dp;
      dtemp->prev2=dp->prev2;
      dp->prev2=dtemp;
      dstart=dtemp;
      dlast->next2=dstart;
    }
}
return;
}

void final_deletion_doubly_circular()
         {
         deletion_doubly_circular();
         printf("\n\nAfter deletion,the modified linked list:\n\n");
         printf("\n\nEnter linked list forwardly:\n\nstart");
         dp=dstart;
        display_doubly_circular_forward();
        printf("->last");
        printf("\n\nEnter linked list backwardly:\n\nlast");
        dp=dlast;
        display_doubly_circular_backward();
        printf("->start");
 
         dp=dstart;
         dn=dn-1;
         dm=dn;
         nth_traverse_doubly_circular();
         dp=dstart;
         add_doubly_circular();

         dp=dstart;
         biggest_doubly_circular();
         dp=dstart;
         smallest_doubly_circular();

         return;
         }

void deletion_doubly_circular()
{
   dp=dstart;
   di=1;
   printf("\n\nwhich node you want to delete:");
   scanf("%d",&dloc);
  
   while(di<dloc)
    {
        dp=dp->next2;
        di++;
    }

    if(dloc>1)
     {
       if(dp->next2!=dstart)
       {
        dp->prev2->next2=dp->next2;
        dp->next2->prev2=dp->prev2;
        free(dp);
       }
     else
     {
       dp->prev2->next2=dp->next2;
       dlast=dp->prev2;
       free(dp);
       dstart->prev2=dlast;
      }
    }

    else
    {
      dp->next2->prev2=dp->prev2;
      dstart=dp->next2;
      free(dp);
      dlast->next2=dstart;
    }
    return;
}

void final_merge_doubly_circular()
  {
        merge_doubly_circular();
        printf("\n\nMerged linked list:\n\n");
        printf("\n\nEnter linked list forwardly:\n\nstart");
        dp=dstart;
        display_doubly_circular_forward();
        printf("->last");
        printf("\n\nEnter linked list backwardly:\n\nlast");
        dp=dlast;
        display_doubly_circular_backward();
        printf("->start");

  dp=dstart;
  dn=(dm+dr);
  dm=dn;
  nth_traverse_doubly_circular();
  dp=dstart;
  add_doubly_circular();

  dp=dstart;
  biggest_doubly_circular();
  dp=dstart;
  smallest_doubly_circular();

  return;
  }

void merge_doubly_circular()
 {
  dstart1=dstart;
  dlast1=dlast;
  printf("\n\nEnter total no of nodes which is going to be merged with previuos node:");
  scanf("%d",&dn);
  dr=dn;
  listmake_doubly_circular();
  dstart2=dstart;
  dlast2=dlast;
        printf("\n\nEntered 1st linked list:\n\n");
  
        printf("\n\nEnter linked list forwardly:\n\nstart1");
        dp=dstart1;
        dstart=dstart1;
        display_doubly_circular_forward();
        printf("->last1");
        printf("\n\nEnter linked list backwardly:\n\nlast1");
        dp=dlast1;
        dlast=dlast1;
        display_doubly_circular_backward();
        printf("->start1");

        printf("\n\nEntered 2nd linked list:\n\n");
  
        printf("\n\nEnter linked list forwardly:\n\nstart2");
        dp=dstart2;
        dstart=dstart2;
        display_doubly_circular_forward();
        printf("->last2");
        printf("\n\nEnter linked list backwardly:\n\nlast2");
        dp=dlast2;
        dlast=dlast2;
        display_doubly_circular_backward();
        printf("->start2");

  dp=dstart1;
  dstart=dstart1;
  while(dp->next2!=dstart)
  {
    dp=dp->next2;
  }

  dp->next2=dstart2;
  dstart2->prev2=dp;
  
  dstart1->prev2=dlast2;
  dlast2->next2=dstart1;

  dstart=dstart1;
  dlast=dlast2;

  return;
  }

void final_split_doubly_circular()
{
 split_doubly_circular();
 printf("\n\n1st Split nodes are:\n\n");
 dp=dstart1;
 dstart=dstart1;
        printf("\n\nEnter linked list forwardly:\n\nstart1");
        display_doubly_circular_forward();
        printf("->last1");
        printf("\n\nEnter linked list backwardly:\n\nlast1");
        dp=dlast1;
        dlast=dlast1;
        display_doubly_circular_backward();
        printf("->start1");

 dp=dstart1;
 dn=dloc;
 nth_traverse_doubly_circular();
 dp=dstart1;
 add_doubly_circular();
  
  dstart=dstart1;
  dp=dstart;
  biggest_doubly_circular();
  dstart=dstart1;
  dp=dstart;
  smallest_doubly_circular();


 printf("\n\n2nd Split nodes are:\n\n");
 dp=dstart2;
 dstart=dstart2;
        printf("\n\nEnter linked list forwardly:\n\nstart2");
        display_doubly_circular_forward();
        printf("->last2");
        printf("\n\nEnter linked list backwardly:\n\nlast2");
        dp=dlast2;
        dlast=dlast2;
        display_doubly_circular_backward();
        printf("->start2");

 dp=dstart2;
 dn=dm-dloc;
 nth_traverse_doubly_circular();
 dp=dstart2;
 add_doubly_circular();

  dstart=dstart2;
  dp=dstart;
  biggest_doubly_circular();
  dstart=dstart2;
  dp=dstart;
  smallest_doubly_circular();
 

 dstart=dstart2;

 
 return;
}

void split_doubly_circular()
  {
  printf("\n\nSplit at node no:");
  scanf("%d",&dloc);
  di=1;
  dp=dstart;

  while(di<dloc)
  {
      dp=dp->next2;
      di++;
  }

 dstart1=dstart;
 dlast1=dp;

 dp=dp->next2;

 dstart2=dp;
 dlast2=dlast;

 dlast2->next2=dstart2;
 dstart2->prev2=dlast2;

 dlast1->next2=dstart1;
 dstart1->prev2=dlast1;

 return;
}


void final_copy_doubly_circular()
{
copy_doubly_circular();
dp=dstart3;
dstart=dstart3;
printf("\n\nCopied linked list:\n\n");
        printf("\n\nEnter linked list forwardly:\n\nstart");
        dp=dstart3;
        dstart=dstart3;
        display_doubly_circular_forward();
        printf("->last");
        printf("\n\nEnter linked list backwardly:\n\nlast");
        dp=dlast3;
        dlast=dlast3;
        display_doubly_circular_backward();
        printf("->start");

dp=dstart3;
dstart=dstart3;
n=dcount;
nth_traverse_doubly_circular();

  dstart=dstart3;
  dp=dstart;
  biggest_doubly_circular();
  dstart=dstart3;
  dp=dstart;
  smallest_doubly_circular();

return;
}

void copy_doubly_circular()
{
    dstart3=(struct node2*)malloc(sizeof(struct node2));
    if(dstart3==NULL)
    {
      printf("Insufficient Memory!!");
      return;
    }
    else
   {
      dp=dstart;
      dp1=dstart3;
      dp1->data2=dp->data2;
      dp1->prev2=NULL;
      dp1->next2=NULL;
   }

dp=dstart;
dcount=1;
do
{
    dp=dp->next2;
    
    dtemp=(struct node2*)malloc(sizeof(struct node2));
    if(dtemp==NULL)
    {
        printf("Insufficient memory!");
        return;
    }
  else
  {
      dtemp->data2=dp->data2;
      dtemp->prev2=dp1;
      dtemp->next2=NULL;
      
      dp1->next2=dtemp;
      dp1=dp1->next2;
  }
dcount++;
}while(dp->next2!=dstart);

dlast3=dp1;
dlast3->next2=dstart3;
//dp1->prev2=dlast3;
dstart3->prev2=dlast3;

return;
}


void listmake_doubly_circular()
{
    di=1;
    dtemp=(struct node2*)malloc(sizeof(struct node2));

        if(dtemp==NULL)
        {
            printf("Insufficient Memory!!");
            return;
        }
    else
        {
            printf("\n\nEnter value at node no %d:",di);
            scanf("%d",&delement);
            dtemp->data2=delement;
            dp=dtemp;
        }

        dstart=dtemp;

        for(di=2;di<=dn;di++)
        {
           dtemp=(struct node2*)malloc(sizeof(struct node2));

        if(dtemp==NULL)
        {
            printf("Insufficient Memory!!");
            return;
        }
    else
       {
         printf("\n\nEnter value at node no %d:",di);
         scanf("%d",&delement);
         dtemp->data2=delement;
         dtemp->next2=NULL;
         dtemp->prev2=dp;
        
         dp->next2=dtemp;
         dp=dp->next2;
       }
    }
      dlast=dp;
      dlast->next2=dstart;
      dstart->prev2=dlast;
 
return;
}

void display_doubly_circular_forward()
    {
      do
       {
         printf("->%d ",dp->data2);
         dp=dp->next2;
       } while (dp!=dstart);

    return;
    }

    void display_doubly_circular_backward()
    {
      do
       {
         printf("->%d ",dp->data2);
         dp=dp->prev2;
       } while (dp!=dlast);
       return; 
    }


void nth_traverse_doubly_circular()
           {
           printf("\n\nNumber of times traverse the list circularly=");
           scanf("%d",&dt);
           printf("\n\nTraversing circularly for %d times:\n\nstart",dt);
           for(di=1;di<=dt*dn;di++)
           {
                  printf("->%d ",dp->data2);
                  dp=dp->next2;
           }
           return;
    }

void add_doubly_circular()
  {
    int dsum=0;
   do
    {
      dsum=dsum+(dp->data2);
      dp=dp->next2;
    } while(dp!=dstart);
    
    printf("\n\nAddition of all data element present in the list=%d",dsum);
    return;
  }

    
void biggest_doubly_circular()
{
  int biggest;

  biggest=dp->data2;

  do
  {
    if(biggest <= (dp->data2))
    {
      biggest=dp->data2;
    }
    dp=dp->next2;
  }while(dp!=dstart);

  printf("\nBiggest number is in the list=%d",biggest);
  return;
}

void smallest_doubly_circular()
{
  int smallest;

  smallest=dp->data2;

 do
  {
    if(smallest >= (dp->data2))
    {
      smallest=dp->data2;
    }
    dp=dp->next2;
  }while(dp!=dstart);

  printf("\nSmallest number is in the list=%d",smallest);
  return;
}
