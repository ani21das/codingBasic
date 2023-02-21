#include<stdio.h>
int main(int argc, char const *argv[])
{
    int rows,i,j;
    printf("Enter rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if (j==i||j==rows+1-i)
            {
                printf("* ");
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
