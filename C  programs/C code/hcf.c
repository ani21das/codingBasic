#include<stdio.h>

int main(int argc, char const *argv[])
{
    int a,b,H;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);
    for (H=a<b?a:b;H>=1;H--)
    {
        if (a%H==0&&b%H==0)
        {
            break;
        }
        
    }
    printf("Hcf is %d",H);
    
    return 0;
}
