#include<stdio.h>
int main(int argc, char const *argv[])
{               
    long x,y,z;
    int i,n;
    x=0,y=1;
    printf("Enter the number of term:\n");
    scanf("%d",&n);
    printf("%ld  %ld",x,y);
    for(i=1;i<n;i++)
    {
        z=x+y;
        printf("  %ld ",z);
        x=y;
        y=z;
    }
    printf("\n");
    return 0;
}
