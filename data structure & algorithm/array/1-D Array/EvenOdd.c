//1D array question
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[20],i,even=0,odd=0,compound=0;
    
    int size_of_array;


    printf("Enter the size of array: \n");
    scanf("%d",&size_of_array); 

    if(size_of_array>20)
    {
        printf("Due to underflow condition array can not be inserted !!");
    }
    else
    {
    for(i=0;i<size_of_array;i++)
    {
      printf("Enter a value for arr[%d]: ",i);
      scanf("%d",&arr[i]);
      if(arr[i]==0)
      {
        compound++;
      }
      else if(arr[i]%2 == 0)
      {
          even=even+1;
      }
      else
      {
          odd=odd+1;
      }
    }
  }
      printf("Total even numbers=%d",even);
      printf("\nTotal odd numbers=%d",odd);
      printf("\nTotal compound number=%d",compound);
    
      return 0;
    }