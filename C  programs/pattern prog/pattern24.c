#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j,k;
    printf("Enter the number of row:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
     
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i&&j<=n-1+i&&k)
            {
                if((i+2*j)%2==0)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
                if((i+j)%2==0)
                {
                    printf("1");
                }
                else
                {
                    printf("0");
                }
               k=0;
            }
            else
            {
                printf(" ");
                k=1;
            }
            
        }
            printf("\n");  
    }
  
    
    return 0;
}
