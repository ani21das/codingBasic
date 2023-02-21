#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    int n,temp,r,sum=0;
    printf("Enter the number:");
    scanf("%d",&n);
    temp=n;
    while(n>0)
    {
        r=n%10;
        sum=sum+pow(r,3);
        n=n/10;

    }
   if(temp==sum)
   {
       printf("%d is a armstrong number",temp);

   }
   else
   {
      printf("%d is not a armstrong number",temp);
   }
   
    return 0;
}
