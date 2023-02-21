

#include<stdio.h>

int main(int argc, char const *argv[])
{
    int l,u,i,n,flag,sum1=0,sum2=0;
    printf("Enter two numbers:");
    scanf("%d %d",&l,&u);
    for(n=l;n<=u;n++)
    {
        flag=0;
        for(i=2;i<n;i++)
        {
            if(n%i==0)
            {
              flag=1;
           }
        }
           if(flag==0)
           {
               sum1=sum1+n;
           }
           else
           {
               sum2=sum2+n;
           }
           
    
        }
       printf("Sum of prime numbers from %d to %d=%d\n",l,u,sum1);
       printf("Sum of non prime numbers from %d to %d=%d\n",l,u,sum2);


        return 0;
}