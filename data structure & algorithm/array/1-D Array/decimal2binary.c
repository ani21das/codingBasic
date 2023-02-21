#include<stdio.h>
int main(int argc, char const *argv[])
{
    int num,number,arr[15],i,j;
    printf("Enter a decimal number:");
    scanf("%d",&num);
    i=0;
    number=num;
    while(num>0)
    {
        arr[i]=num%2;
        num=num/2;
        i++;
    }

    printf("Binary number of %d is: ",number);
    for(j=i-1;j>=0;j--)
    {
      printf("%d",arr[j]);
    }
    return 0;
}
