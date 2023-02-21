#include<stdio.h>
int main(int argc, char const *argv[])
{
   int number,n,i,fact=1;
    printf("enter a number:\n");
    scanf("%d",&number);
    n=number;
    if(n<0)
    {
        printf("no factorial due to negative number of input\n");
    } 
    else if(n==0||n==1)
       {
            printf("factorial of %d is 1",n);
        }
      else
      {
          for(i=2;i<=number;i++)
          {
              fact=fact*i;
          }
          printf("factorial of %d =%d\n",n,fact);
      }
    return 0;
}
