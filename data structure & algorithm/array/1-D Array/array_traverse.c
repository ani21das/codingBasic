#include<stdio.h>
int main(int argc, char const *argv[])
{
    int size,a[50],i;
    printf("Enter the size of the array : ");
    scanf("%d",&size);
    printf("Enter array elements one by one :\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of arrays are :");
    for(i=0;i<size;i++)
    {
        printf("\n%d",a[i]);
    }
   return 0;
}
