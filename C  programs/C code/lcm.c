#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,L;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for(L=(a>b?a:b);L<=a*b;L=L+(a>b?a:b))    
    {
        if(L%a==0&&L%b==0)
        {
            break;
        }
    }
     printf("LCM is %d",L);
     
    return 0;
}
