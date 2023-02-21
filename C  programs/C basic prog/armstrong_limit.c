#include<stdio.h>

int main(int argc, char const *argv[])
{
    int num,temp,r,sum;
    int start_no,end_no;
    printf("Input starting number of range:",start_no);
    scanf("%d",&start_no);
    printf("Input ending number of range:",end_no);
    scanf("%d",&end_no);
    printf("armstrong numbers in given range are: ");

    for(num=start_no;num<=end_no;num++)
    {
        temp=num;
        sum=0;

    while(temp>0)
    {
        r=temp%10;
        sum=sum+(r*r*r);
        temp=temp/10;

    }

   if(sum==num)
   {
  printf("%d ",num);
   }
    }
   printf("\n");
   return 0;
}
