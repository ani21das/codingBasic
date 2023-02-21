#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a,b,c;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b)
    {
    if(a>c)
    {
        printf("Bigger number is %d",a);

    }
    else
    {
        printf("Big number is %d",c);
    }
    }
    else
    {
        if(b>c)
        {
            printf("BIgger number is %d",b);

        }
        else
        {
            printf("BIg number is %d",c);

        }
        
    }
    

    return 0;
}
