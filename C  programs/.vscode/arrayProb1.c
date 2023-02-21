#include<stdio.h>
int main(int argc, char const *argv[])
{
    int arr[10],i,sum=0;
    for(i=0;i<10;i++)
    {
        printf("Enter a value for arr[%d] :",i);
        scanf("%d",&arr[i]);
        sum=sum+arr[i];
    }
    printf("sum=%d\n",sum);
    return 0;
}
