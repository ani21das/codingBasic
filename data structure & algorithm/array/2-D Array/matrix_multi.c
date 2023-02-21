#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row_1,row_2,col_1,col_2;
    int mat_1[20][20],mat_2[20][20],mat_3[20][20];
    int i,j,k;
    //inputting values of 1st matrix
    printf("Enter value of row_1 for matrix_1: ");
    scanf("%d",&row_1);
    printf("\nEnter value of col_1 for matrix_1: ");
    scanf("%d",&col_1);

    printf("\n\nEnter elelment value for matrix_1:\n");
    for(i=0;i<row_1;i++)
    {
        for(j=0;j<col_1;j++)
        {
           
            printf("mat_1=[%d][%d]: ",i,j);
            scanf("%d",&mat_1[i][j]);
        }
    }

    //inputting values of 2nd matrix
    printf("value of row_2 for matrix_2: %d",col_1);
    row_2=col_1;
    printf("\n(To procees the matrix multiplication needed 2nd matrix row value is same as 1st matrix column value)");

    printf("\n\nEnter value of col_2 for matrix_2: ");
    scanf("%d",&col_2);

    printf("\nEnter elelment value for matrix_2:\n");
    for(i=0;i<row_2;i++)
    {
        for(j=0;j<col_2;j++)
        {
           
            printf("mat_2=[%d][%d]: ",i,j);
            scanf("%d",&mat_2[i][j]);
        }
    }

    //show 1st matrix
    printf("\nEntered matrix_1:\n");
    for(i=0;i<row_1;i++)
    {
        for(j=0;j<col_1;j++)
        {
            printf("%5d",mat_1[i][j]);
          
        }
        printf("\n");
    }

    //show 2nd matrix
    printf("\nEnter matrix_2:\n");
    for(i=0;i<row_2;i++)
    {
        for(j=0;j<col_2;j++)
        {
            printf("%5d",mat_2[i][j]);

        }
        printf("\n");
    }

    //multiplication of two matrix

    for(i=0;i<row_1;i++)
    {
        for(j=0;j<col_2;j++)
        {
            mat_3[i][j]=0;
            for(k=0;k<col_1;k++)
            {
                mat_3[i][j] += mat_1[i][k]*mat_2[k][j];
            }
        }
    }

    //show the value after multiplication
    printf("\nThe resultant matrix mat_3 is :\n");
    for(i=0;i<row_1;i++)
    {
        for(j=0;j<col_2;j++)
        {
            printf("%5d",mat_3[i][j]);
        }
        printf("\n");
    }

   return 0;
}
