#include<stdio.h>

int main(int argc, char const *argv[])
{
    int n,mul=1,r;
    printf("Enter a number:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        mul=mul*r;
        n=n/10;

    }
    printf("mul of digits=%d",mul);
    return 0;
}
