#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,rows;
    printf("Enter rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if(j==rows+1-i)
            {
                printf("*");
            }
            else
            {
                printf("%d",rows+1-j);
            }
            
        }
        printf("\n");
    }
    return 0;
}
