#include<stdio.h>
int main(int argc, char const *argv[])
{
    //int a[10]={10,20,32,42,1,45,12,90,-2,-99};
    //int a[]={10,98,2,34,5};
    int a[50],size,smallest,largest,i;

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
    smallest=largest=a[0];
    for(i=1;i<size;i++)
    {
      if(a[i]<smallest)
      {
          smallest=a[i];
      }
      if(a[i]>largest)
      {
          largest=a[i];
      }
    }
    printf("smallest=%d",smallest);
    printf("\nlargest=%d",largest);

    }

   return 0;
}
