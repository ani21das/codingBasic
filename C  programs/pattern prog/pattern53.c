#include<stdio.h>
int main(int argc, char const *argv[])
{
    int rows,i,j,k;
    printf("Enter rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        k=0;
        for(j=1;j<=rows;j++)
        {
            if(j<=i)
            {
                printf("%d ",k);
                k=k+i-1;
            }
            else
            {
                printf("  ");
            }
            
           
        }
    printf("\n");
    }
    return 0;
}
