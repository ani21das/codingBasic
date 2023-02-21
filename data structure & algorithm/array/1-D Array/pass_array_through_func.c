#include<stdio.h>
void check(int m);
int main(int argc, char const *argv[])
{
    int arr[50],i,size;
    printf("Enter the size of array : ");
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
    
    printf("Show Output:\n\n");
     for(i=0;i<size;i++)
    {
       
       check(arr[i]);
     
     }
    }
    return 0;
}

void check(int n)
{
    if(n==0)
    {
        printf("\t\t%d is a compound number\n",n);
    }
    else
    {
    if (n%2==0)
    {
        printf("\t\t%d is even\n",n);
    }
    else
    {
        printf("\t\t%d is odd\n",n);
    }
  }
}

