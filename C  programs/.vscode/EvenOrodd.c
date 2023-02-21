#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number:\n");
    scanf("%d",&n);
    if(n<2)
    {
        if(n==0)
        {
            printf("%d is even",n);
        }
        else
        {
            printf("%d is a complex number",n);
        }
        
    }
    else
    {
    
    if(n%2!=0)
    {
        printf("%d is odd",n);
    }
    else
    {
        printf("%d is even",n);
    }
    
    }
    return 0;
}
