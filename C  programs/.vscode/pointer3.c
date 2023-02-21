#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i=5;
    int *j,**k;
    k=&j;
    j=&i;
    printf("Value of K is %p\n",k);
    printf("address of k is %p\n",&k);
    printf("value at address of k is %p\n",*(&k));
    printf("value at address stored as value of k is %p\n",*k);
    printf("value at address of address stored as value of k is %d",**k);
    return 0;
}
