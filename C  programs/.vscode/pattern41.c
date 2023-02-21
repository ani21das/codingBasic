#include<stdio.h>
int main(int argc, char const *argv[])
{
    int rows,i,j;
    char k;
    printf("Enter the number of rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
       k='A';   
        for(j=1;j<=2*rows-1;j++)
        {
            if (j>=rows+1-i&&j<=rows-1+i)
            {
               printf("%c",k);
              //j<rows?k++:k--(this can also use);
                 if(j<rows)
               {
                  k++; 
               }
               else
               {
                   k--;
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
