#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[50],size,i,num;
    printf("Enter size of array:");
    scanf("%d",&size);
    if(size>50)
    {
        printf("due to overflow condition you can not insert any value!");
    }
    else
    {
    printf("Enter elements of array:");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of arrays are:\n");
    for (i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
    printf("Enter data to be inserted at begining:");
    scanf("%d",&num);
    for(i=size-1;i>=0;i--)
    {
     a[i+1]=a[i];
     }
    a[0]=num;
    size++;
    printf("Elements of arrays are:\n");
    for (i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
}
    return 0;
}
