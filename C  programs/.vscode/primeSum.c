#include<stdio.h>

int main(int argc, char const *argv[])
{
    int l,u,x,i,sum1=0,sum2=0;
    printf("Enter two numbers:");
    scanf("%d %d",&l,&u);
    for(x=l;x<=u;x++)
    {
        for(i=2;i<=x/2;i++)
        {
            if(x%i==0)
            {
              goto nprime;
           }
        if(x%i!=0)
        {
            goto prime;
        }
      }
    nprime:
              sum1=sum1+x;
           
    prime:
              sum2=sum2+x;
  
    }
    printf("Sum of non prime numbers from %d to %d=%d\n",l,u,sum1);

        return 0;
}
    