#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j;
    printf("Enter the number of row:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        
        for(j=1;j<=2*n-1;j++)
        {
            if(j>=i&&j<=2*n-i)
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
