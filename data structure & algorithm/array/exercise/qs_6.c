void swapvar(int a,int b);
void swapvarr(int arr1[5],int arr2[5]);
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int a=4,b=6;
    int arr1[5]={1,2,3,4,5};
    int arr2[5]={6,7,8,9,10};
    swapvar(a,b);
    swapvarr(arr1,arr2);
    printf("arr1[0]=%d, arr1[4]=%d\n",arr1[0],arr1[4]);
    printf("arr2[0]=%d, arr2[4]=%d\n",arr2[0],arr2[4]);
    return 0;
}
void swapvar(int a,int b)
{
    int temp1;
    temp1=a;
    a=b;
    b=temp1;
    printf("a=%d, b=%d\n",a,b);
}

void swapvarr(int arr1[5],int arr2[5])
{
    int i,temp2;
    for(i=0;i<5;i++)
    {
        temp2=arr1[i], arr1[i]=arr2[i], arr2[i]=temp2;
    }
}