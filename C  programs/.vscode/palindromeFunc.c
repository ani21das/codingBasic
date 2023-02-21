#include<stdio.h>
int reverse(int);
int ispalindrome(int);
int main(int argc, char const *argv[])
{
    int n,s;
    printf("Enter the number:");
    scanf("%d",&n);
    if(ispalindrome(n))
    {
        printf("%d is a palindrome",n);

    }
    else
    {
        printf("%d is not a palindrome",n);
    }
    
    return 0;
}
int ispalindrome(int m)
{
    if (m==reverse(m))
        
        return 1;
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
