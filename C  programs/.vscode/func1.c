#include<stdio.h>
void func(void);
int a=10;
int main(int argc, char const *argv[])
{
    func();
    func();
    func();
    return 0;
}
void func(void)
{
    
    int b=10;
    static int p=10;
    printf("%d %d %d\n",a,b,p);
    a++;
    b++;
    p++;
    printf("%d %d %d\n",a,b,p);

}