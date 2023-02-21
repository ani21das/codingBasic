#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a[50],size,i,num,pos;
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
    printf("Enter data to be inserted:");
    scanf("%d",&num);
    printf("Enter position:");
    scanf("%d",&pos);
    if(pos<=0||pos>size+1)
    {
    printf("Invalid position!");
    }
    else
    {
        if(pos==1)
        {
            for(i=size-1;i>=0;i--)
            {
                a[i+1]=a[i];
            }
        a[0]=num;
        size++;
        }

    if(pos<=size&&pos!=1)
    {    
    for(i=size-1;i>=pos-1;i--)
    {
        a[i+1]=a[i];
    }
    a[pos-1]=num;
    size++;
     }

     if(pos==size+1)
     {
         a[size]=num;
         size++;
     }
     
    printf("Elements of arrays are:\n");
    for (i=0;i<size;i++)
    {
        printf("%d\n",a[i]);
    }
 }
}
    return 0;
}
