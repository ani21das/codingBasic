#include<stdio.h>
//#define row 3
//#define col 4
int main(int argc, char const *argv[])
{
    int row,col,mat[50][50],i,j;
    printf("Enter the value of rows:");
    scanf("%d",&row);
    printf("Enter the value of columns:");
    scanf("%d",&col);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter mat[%d][%d]: ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("The entered matrix is: \n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%5d",mat[i][j]);
        }
        printf("\n");
    }
     printf("\n");
    return 0;
}
