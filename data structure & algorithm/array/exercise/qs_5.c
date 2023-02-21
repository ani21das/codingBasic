#include<stdio.h>
int main(int argc, char const *argv[])
{
    int x[10],y[3][4],z[2][3][5];
    printf("%u\t%u\t%u\n",sizeof(x),sizeof(y),sizeof(z));
    return 0;
}
