//1D array question
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[20],size,i,sum=0;
    printf("Enter the value of array: \n");
    scanf("%d",&size);
    if(size>20)
    {
        printf("Due to underflow condition array can not be inserted !!");
    }
    else
    {
    for(i=0;i<size;i++)
    {
      printf("Enter the value for a[%d]:\n",i);
      scanf("%d",&a[i]);
      sum=sum+a[i];
    }
    printf("Sum=%d\n",sum);
    }
    return 0;
}
