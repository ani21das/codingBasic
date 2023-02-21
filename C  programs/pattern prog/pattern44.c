#include<stdio.h>
int main(int argc, char const *argv[])
{
    int rows,i,j,p;
    char c;
    printf("Enter rows:");
    scanf("%d",&rows);
    for(i=1;i<=rows;i++)
    {
        p=1;
        c='A';
        for(j=1;j<=2*rows-1;j++)
        {
            if(j>=rows+1-i&&j<=rows-1+i)
            {
                if (j<=rows)
                {
                   printf("%d",p);
                   p++;
                }
                else
                {
                    printf("%c",c);
                    c++;
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
