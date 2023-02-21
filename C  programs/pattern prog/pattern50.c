#include<stdio.h>
int main(int argc, char const *argv[])
{
    int i,j;
    static int k=1;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=17;j++)
        {
            if((j>=5-i&&j<=4+i)||(j>=14-i&&j<=13+i))
            {
                printf(" *");
            }
            else
            {
                printf("  ");
            }
            
        }
        printf("\n");
    }
    for(i=5;i<=13;i++)
    {
        for(j=1;j<=17;j++)
        {
            if(j>=k&&j<=18-k)
            {
                printf(" *");

            }
            else
            {
                printf("  ");
                
            }
        }
        printf("\n");
        k++;
    }
    return 0;
}
