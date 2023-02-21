#include<stdio.h>
int main(int argc, char const *argv[])
{
    int k=0,i,n;
    printf("Enter the number:\n");
    scanf("%d",&n);
     for(i=2;i<=n-1;i++)
     {
    if(n%i==0)
       k=1;
     }
     if(k==0)
     printf("prime");
     else
     {
         printf("not prime");
     }
     return 0;
}