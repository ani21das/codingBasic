#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[]={2,3,4,5,1};
    int *q;
    q=a;
    printf("%d\n",a[2]);
    printf("%d\n",*(a+2));
    printf("%d\n",*(q+2));

    printf("\n%u\n",&a[2]);
    printf("%u\n",(a+2));
    printf("%u\n",(q+2));
    printf("%d\n",2[a]);
    printf("%d\n",*a);
    printf("%d\n",*q);
    printf("%d",a);
    return 0;
}
