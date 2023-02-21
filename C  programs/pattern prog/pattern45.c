#include<stdio.h>
int main(int argc, char const *argv[])
{
    int rows,i,j,a,b;
    printf("Enter rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        a=1;
        b=0;
        for(j=1;j<=rows;j++)
        {
            if(j<=i)
            {
                if(j%2==0)
                {
                    printf("%d",b);
                }
                else
                {
                    printf("%d",a);
                }
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
