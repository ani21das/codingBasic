#include<stdio.h>
void square(int val[10]);
int size;
int main(int argc, char const *argv[])
{
    int i,arr[10];
    printf("Enter the size of array: ");
    scanf("%d",&size);
    if(size>50)
    {
        printf("Due to overflow condition the array elemetns are not can not be inserted !!");

    }
    else
    {
      printf("Enter array elements: \n");
      for(i=0;i<size;i++)
      {
          scanf("%d",&arr[i]);
      }
    square(arr);
    printf("Contents of array are: ");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
  } 
    return 0;
}

void square(int value[10])
{
    int sum=0,j;
    for (j=0;j<size;j++)
    {
        value[j]=value[j]*value[j];
        sum=sum+value[j];
    }
    printf("Sum of squares=%d\n",sum);
 }
