#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j,k,p;
    printf("Enter the number of row:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        
        for(j=1;j<=2*n-1;j++)
        {
            p=1;
            if(j>=n+1-i&&j<=n-1+i&&k)
            {
            
                printf("%d",p);
                p++;
               
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
