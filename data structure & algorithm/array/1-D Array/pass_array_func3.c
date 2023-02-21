#include<stdio.h>
int add(int arr[],int n);
int main(int argc, char const *argv[])
{
    int a[5]={2,4,6,8,10};
    int b[8]={1,3,5,7,9,11,13,15};
    int c[10]={1,2,3,4,5,6,7,8,9,10};
    int m1,m2,m3;
    printf("Enter how many elements want to be add for array a:\n");
    scanf("%d",&m1);
    printf("Enter how many elements want to be add for array b:\n");
    scanf("%d",&m2);
    printf("Enter how many elements want to be add for array c:\n");
    scanf("%d",&m3);
    printf("Sum of element of array a : %d\n",add(a,m1));
    printf("Sum of element of array b : %d\n",add(b,m2));
    printf("Sum of element of array c : %d\n",add(c,m3));
    return 0;
}

int add(int arr[],int n)
{
    int i,sum=0;
    for(i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}