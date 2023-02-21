#include<stdio.h>
#define MAX 15
int main()
{
  int mat[MAX][MAX];
  int m,n,i,j,s1=0,s2=0,s3=0,s4=0,flag;
  printf("\nEnter the row and column size:\n");
  scanf("\n%d\n%d",&m,&n);
  if(m==n)
  {
    printf("\nEnter matrix element one by one\n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        printf("Enter mat[%d][%d]: ",i,j);
        scanf("%d",&mat[i][j]);
      }
    }
    printf("Entered matrix is: \n");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        printf("%5d",mat[i][j]);
      }
      printf("\n");
    }

    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        if(i==j)
        {
          s1=s1+mat[i][j];
        }
      }
    }
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        if(j==n-1-i)
        {
          s2=s2+mat[i][j];
        }
      }
    if(s1==s2)
    {
      flag=1;
    }
    else
    {
      flag=1;
      break;
    }
    s2=0;
    }
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      s3=s3+mat[i][j];
    }
    if(s1==s3)
    {
      flag=1;
    }
    else
    {
      flag=0;
      break;
    }
   s3=0;
  }

for(i=1;i<m;i++)
{
  for(j=0;j<n;j++)
  {
    s4=s4+mat[i][j];
  }
  if(s1==s4)
  {
    flag=1;
  }
  else
  {
    flag=0;
    break;
  }
  s4=0;
}

if(flag==1)
{
  printf("\nThe given matrix is magic square:)");
}
else
{
  printf("\nThe given matrix is not magic sqare!!");
}
  }
  else
  {
    printf("If you want to produce square matrix then give column size same as row size!!");
  } 
return 0;
  }