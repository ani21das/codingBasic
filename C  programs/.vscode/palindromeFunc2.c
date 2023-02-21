#include<stdio.h>
int reverse(int);
void ispalindrome(int);
int main(int argc, char const *argv[])
{
    int n;
    printf("Enter the number:");
    scanf("%d",&n);
    ispalindrome(n);
    return 0;
}

void ispalindrome(int m)
{
    if (m==reverse(m))
       {
           printf("%d is palindrome",m);
       } 
       else
       {
           printf("%d is not palindrome",m);
       }
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
