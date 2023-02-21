#include<stdio.h>

int main(int argc, char const *argv[])
{
    int bin=0,i=1,rem,dec,temp;
    printf("Enter the decimal number:");
    scanf("%d",&dec);
    temp=dec;
    while(dec>0)
    {
        rem=dec%2;
        dec=dec/2;
        bin=bin+(rem*i);
        i=i*10;
    }
    printf("equivalent binary number of %d decimal number =%d",temp,bin);
    
    return 0;
}
