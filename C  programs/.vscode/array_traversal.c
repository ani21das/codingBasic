#include<stdio.h>
int main(int argc, char const *argv[])
{
     int a[50],size,i;
    printf("Enter size of array:");
    scanf("%d",&size);
    printf("Enter elements of array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements in array are:\n");
    for(i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    return 0;
}
