#include<stdio.h>
int main(int argc, char const *argv[])
{
    int rows,i,j;
    printf("Enter rows:");
    scanf("%d",&rows);
    for (i=1;i<=rows;i++)
    {
       for(j=1;j<=2*rows;j++)
       {
           if(j>=rows+1-i&&j<=2*rows+1-i)
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
