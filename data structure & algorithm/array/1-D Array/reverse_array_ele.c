#include<stdio.h>
int main(int argc, char const *argv[])
{
    //int a[10]={10,20,32,42,1,45,12,90,-2,-99};
    //int a[]={10,98,2,34,5};
    int a[50],size;
    int i,j,temp;

    printf("Enter the array size:\n");
    scanf("%d",&size);
    if(size>50)
    {
        printf("Due to overflow condition array elements can not be inserted!!");
    }
    else
    {
    for(i=0;i<size;i++)
    {
      printf("Enter the value for a[%d]:\n",i);
      scanf("%d",&a[i]);
    }
     printf("Array elements are:\n");
    for(i=0;i<size;i++)
    {
       printf("%d\n",a[i]);
    }
    for(i=0,j=size-1;i<j;i++,j--)
    {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    printf("\nAfter reversing, the array is : ");
    for(i=0;i<size;i++)
    {
        printf("\n%d",a[i]);
    }
  }
  return 0;
}

        
    

