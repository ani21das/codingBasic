#include<stdio.h>

int main(int argc, char const *argv[])
{
    int i,j,n;
    printf("Enter rows:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=2*n-1;j++)
        {
            if(j<=n+1-i||j>=n-1+i)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }
    return 0;
}
