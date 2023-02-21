#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j,rows;
    printf("Enter the rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=rows;j++)
        {
            if(j==i||j==rows+1-i)
            {
              if(i==j)
              {
                  printf("\\");
              }
              else
              {
                  printf("/");
              }
              
            }
            else
            {
                printf("*");

            }
        }
        printf("\n");
    }
    return 0;
}
