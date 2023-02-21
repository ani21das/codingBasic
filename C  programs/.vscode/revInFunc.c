#include<stdio.h>
int reverse(int);
int main(int argc, char const *argv[])
{
    int n,s;
    printf("Enter the number:");
    scanf("%d",&n);
    s=reverse(n);
    printf("reveres of %d is %d",n,s);
    return 0;
}
int reverse(int num)
{
    int rem,rev=0;
   do
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }while(num>0);
    return rev;
}
