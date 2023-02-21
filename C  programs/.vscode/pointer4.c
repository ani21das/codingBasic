#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=10;
    int *pa,**ppa;
    pa=&a;
    ppa=&pa;
    printf("address of a=%p\n",&a);
    printf("value of pa=address of a=%p\n",pa);
    printf("value of *pa=value of a=%d\n",*pa);
    printf("address of pa=%p\n",&pa);
    printf("Value of ppa=address of pa=%p\n",ppa);
    printf("value of *ppa=value of pa=%p\n",*ppa);
    printf("value of **ppa=value of a=%d\n",**ppa);
    printf("address of ppa=%p\n",&ppa);
    return 0;
}
