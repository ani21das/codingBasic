#include<stdio.h>
#define MAX 20
int main()
{
    int a[MAX][MAX],i,j,n,num;
    printf("Enter value of n(odd value): ");
    scanf("%d",&n);
    i=n-1;
    j=(n-1)/2;

    for(num=1;num<=n*n;num++)
    {
        a[i][j]=num;
        i++;
        j--;

        if(num%n==0)
        {
            i=i-2;
            j++;
        }
     else if(i==n)
     {
       i=0;   
     }
    else if(j==-1)
    {
       j=n-1;
    }
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          printf("%4d",a[i][j]);
      }
    printf("\n");
  }
 return 0;
}