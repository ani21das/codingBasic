#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,fact=1,n;
    printf("Enter a number:");  
    scanf("%d",&n);
    while(n>1)
    {
        fact=fact*n;-
        n=n-1;
    }
    printf("Factoria is %d",fact);
    return 0;
}
