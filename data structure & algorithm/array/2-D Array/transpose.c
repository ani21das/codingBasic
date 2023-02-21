#include<stdio.h>
int main(int argc, char const *argv[])
{
    int mat_1[20][20],mat_2[20][20];
    int row,col;
    int i,j;
    printf("Enter the value of rows: ");
    scanf("%d",&row);
    printf("\nEnter the value of column: ");
    scanf("%d",&col);
    printf("\nEnter values for mat_1:");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("\nmat_1[%d][%d]= ",i,j);
            scanf("%d",&mat_1[i][j]);
        }
    }
    printf("\nshow mat_1: \n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%5d",mat_1[i][j]);
        }
     printf("\n");

    }
 
    for(i=0;i<col;i++)
    {
      for(j=0;j<row;j++)
      {
          mat_2[i][j]=mat_1[j][i];
      }
    }

    printf("\nTranspose matrix is: \n");
    for(i=0;i<col;i++)
    {
      for(j=0;j<row;j++)
      {
          printf("%5d",mat_2[i][j]);
      }
      printf("\n");
    }
   
     return 0;
}