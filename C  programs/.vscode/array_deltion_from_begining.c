#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[50],size,i;
    printf("Enter size of array:");
    scanf("%d",&size);
    if(size>50)
    {
        printf("Overflow occurs!");

    }
    else
    {
    printf("Enter elements in array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);

    }
    printf("elements of arrays are:\n");
    for(i=0;i<size;i++)
    {
     printf("%d\n",a[i]);
    }
    for(i=0;i<size-1;i++)
     {
        a[i]=a[i+1]; 
     }
    size--;
    printf("\n After deletion of begining element updated elements of arrays are:\n");
    for(i=0;i<size;i++)
    {
     printf("%d\n",a[i]);
    } 
 }
    return 0;
}
