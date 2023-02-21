#include<stdio.h>
int main(int argc, char const *argv[])
{
    int mat1[50][50],mat2[50][50],mat3[50][50];
    int i,j,row,col;
    printf("Enter the rows for each matrix : "); //rule is same row and columns for addition of matrix
    scanf("%d",&row);
    printf("Enter the columns for each matrix : ");
    scanf("%d",&col);

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter mat1[%d][%d]: ",i,j);
            scanf("%d",&mat1[i][j]);
        }
    }
  
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("Enter mat2[%d][%d]: ",i,j);
            scanf("%d",&mat2[i][j]);
        }
    } 

    printf("The entered matrix_1 is: \n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%5d",mat1[i][j]);
          
        }
        printf("\n");
    }

     printf("The entered matrix_2 is: \n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%5d",mat2[i][j]);
          
        }
        printf("\n");
    }
  
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
          mat3[i][j]=mat1[i][j]+mat2[i][j];
        }
    }
     printf("The addition of matrix is : \n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
          printf("%5d",mat3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
