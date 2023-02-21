#include<stdio.h>
int main(int argc, char const *argv[])
{
     int a[]={3,1,2,6,5};
     int *q;
    q=a;
    printf("%d\n",a);
    printf("%d\n",q);
    printf("%d\n",&a);
    printf("%d\n",&q);
    printf("%d\n",a+1);
    printf("%d\n",&a+1);
    printf("%d\n",a[0]+1);
    printf("%d\n",&a[0]+1);
    printf("%d\n",*(a+1));
    printf("%d",*a+1);
    return 0;
}
