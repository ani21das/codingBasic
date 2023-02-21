#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[50],size,element,i,pos=1;
    printf("Enter the value of array: \n");
    scanf("%d",&size);
    if(size>50)
    {
        printf("Due to underflow condition array can not be inserted !!");
    }
    else
    {
        printf("Enter array elements:\n");
        for(i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }

     printf("Elements of arrays are:\n");
     for(i=0;i<size;i++)
     {
         printf("%d\n",a[i]);
     }
        printf("Enter the value of element which is going to be inserted in the  beginning of array:");
        scanf("%d",&element);
       for(i=size-1;i>=pos-1;i--)
        {
          a[i+1]=a[i];
        }
        a[pos-1]=element;
        size++;

        printf("After addition of new element updated elements of arrays are: \n");

        for(i=0;i<size;i++)
        {
            printf("%d\n",a[i]);
        }
    }
    return 0;
}
