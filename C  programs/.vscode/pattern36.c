#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,k=0,rows,n,p;
    printf("Enter rows:");
    scanf("%d",&rows);
    n=(rows+1)/2;
    for(i=1;i<=rows;i++)
    {
        p=5;
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
    for(j=1;j<=n;j++)
    { 
        
        if(j>=n+1-k)
        {
            printf("%d",p);
            p--;

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
