#include<stdio.h>

int main(int argc, char const *argv[])
{
    int l,u,x,i;
    printf("Enter two numbers:");
    scanf("%d %d",&l,&u);
    printf("prime numbers under %d to %d is:",l,u);
    for(x=l;x<=u;x++)
    {
        for(i=2;i<x;i++)
        {
            if(x%i==0)
            {
                break;
            }
        }
        if(i==x)
        {
         printf("%d ",x);
        }
       
    }
    
    
    return 0;
}
