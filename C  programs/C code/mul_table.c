#include<stdio.h>
int main(int argc, char const *argv[])
{
    int number,i,limit,result;
    printf("\nEnter the number of which table to be calculated: ");
    scanf("%d",&number);
    printf("\nUpto which limit do you want this table to be shown: ");
    scanf("%d",&limit);
    printf("\nThe Multiplication table upto %d is :\n",limit);

    for(i=1; i<=limit; i++)
    {
       result = number*i;
       printf("\n%d X %d = %d\n",number,i,result);
    }
    return 0;
}
