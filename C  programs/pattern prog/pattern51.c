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
                if(j>=5+i&&j<=13-i)
                {
                    if(i==1)
                    {
                    if(j==6)
                    {
                        printf(" L");
                    }
                    if(j==7)
                    {
                        printf(" o");
                    }
                    if(j==8)
                    {
                        printf(" V");
                    }
                    if(j==9)
                    {
                        printf(" e");
                    }
                    if(j==10)
                    {
                        printf(" Y");
                    }
                    if(j==11)
                    {
                        printf(" o");
                    }
                    if(j==12)
                    {
                        printf(" U");
                    }
                }
                if (i==2)
                {
                    if(j==7)
                    {
                        printf(" T");
                    }
                    if(j==8)
                    {
                        printf(" e");
                    }
                    if(j==9)
                    {
                        printf(" A");
                    }
                    if(j==10)
                    {
                        printf(" m");
                    }
                    if(j==11)
                    {
                        printf(" o");
                    }
                }
                if(i==3)
                {
                    if(j==8)
                    {
                        printf("Bi");
                    }
                    if(j==8)
                    {
                        printf(" T");
                    }
                    if(j==8)
                    {
                        printf(" U");
                    }
                }
            }
                else
                {
                    printf("  ");
                }
                
              
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
    return 1;
}
