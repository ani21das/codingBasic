#include<stdio.h>
int func(int arr[],int size);
int main(int argc, char const *argv[])
{
    int arr[10]={1,2,3,4,8,10};
    printf("%d\n",func(arr,6));
    return 0;
}
int func(int arr[],int size)
{
    if(size==0)
        return 0;
    
}
