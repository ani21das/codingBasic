#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j,p;
    printf("Enter the number of row:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        p=1;
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=n+1-i&&j<=n-1+i)
            {
                printf("%d",p);
                if(j<n)
                {
                    p++;
                }
                else
                {
                    p--;
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
