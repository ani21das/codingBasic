#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
    int i=0,rem,dec=0;
    long int bin,temp;
    printf("Enter the binary number:");
    scanf("%d",&bin);
    temp=bin;
    while(bin>0)
    {
        rem=bin%10;
        dec=dec+rem*(pow(2,i));
        bin=bin/10;
        i++;

    }

    printf("equivalent deecimal number of %d binary number=%d",temp,dec);
    return 0;
}
