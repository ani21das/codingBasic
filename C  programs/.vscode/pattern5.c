#include<stdio.h>
int main(int argc, char const *argv[])
{
    int n,i,j;
    printf("Enter the number of row:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            if(j<=i) 
            {
                if((i+j)%2!=0)                                   
            {
                printf("1 ");
            }
            else
            {
                printf("0 ");
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
