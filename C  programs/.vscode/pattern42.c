#include<stdio.h>
int main(int argc, char const *argv[])
{
    int rows,i,j,p;
    char c;
    printf("Enter range:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
         c='A';
        p=1;
        for (j=1;j<=2*rows;j++)
        {
           
            if(j>=rows+1-i&&j<=rows+i)
            {
               if(j<=rows)
                {
                    printf("%c",c);
                    c++;
                }
               else
               {
                printf("%d",p);
                 p++;
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
