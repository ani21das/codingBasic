//this is for unsorted array only
#include<stdio.h>
int main()
{
    int a[50],size,element,i,pos;
    printf("Enter the size of array:");
    scanf("%d",&size);
    if(size>50)
    {
        printf("Overflow condition is occured");
    }
    else
    {
      printf("Enter array elements: \n");
      for(i=0;i<size;i++)
      {
          scanf("%d",&a[i]);
      }
     printf("Elements of arrays are:\n");
     for(i=0;i<size;i++)
     {
         printf("%d\n",a[i]);
     }

    printf("Enter the position where you want to insert new array element:\n");
    scanf("%d",&pos);
    printf("enter the value of new element which is going to be inserted:\n");
    scanf("%d",&element);
    if(pos<=0 && pos>size)
    {
        printf("invalid position !!");
    }
    else
    {
       a[size]=a[pos-1];
       a[pos-1]=element;
       size++;
    }
    printf("After addition of new element updated elements of arrays are:\n");
     for(i=0;i<size;i++)
     {
         printf("%d\n",a[i]);
     }


    }
    return 0;
}
