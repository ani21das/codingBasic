#include<stdio.h>
int main(int argc, char const *argv[])
{
    int rows,n,i,j,k=0;
    printf("Enter rows:");
    scanf("%d",&rows);
    n=(rows+1)/2;
    for(i=1;i<=rows;i++)
    {
        if(rows%2==0)
            {
                if(i<=n)
                {
                  k++;
                }
                if(i>n+1)
                {
                    k--;
                }
            }
            else
            {
               i<=n?k++:k--;
            }
        
        for(j=1;j<=rows;j++)
        {
           if(j<=n+1-k||j>=n-1+k)
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