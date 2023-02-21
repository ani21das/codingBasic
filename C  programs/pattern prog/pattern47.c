#include<stdio.h>
int main(int argc, char const *argv[])
{
    int rows,i,j,k=1,m=0,n;
    printf("Enter rows:");
    scanf("%d",&rows);
    n=(rows/2)+1;
    for(i=1;i<=rows;i++)
    {
        i<=n?m++:m--;
        k=m-1;
        for(j=1;j<=rows;j++)
        {
            if(j>=n+1-m && j<=n-1+m)
            {
                printf(" %d",j<n?k++%10:k--%10);
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
