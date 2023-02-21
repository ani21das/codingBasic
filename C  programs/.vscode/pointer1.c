#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,*j;
    i=5;
    j=&i;
    printf("\n value of i =%d",i);
    printf("\n address of i =%u",&i);
    printf("\n value at address of i = value of i =%d",*(&i));
    printf("\n\n value of j=address of i =%u",j);
    printf("\n address of j =%u",&j);
    printf("\n value at address of j=value of j=address of i =%u",*(&j));
    printf("\n value at address stored as value of j=value of i =%d",*j);
    *j=10;
    printf("\n value of i=%d",i);
    return 0;
}
