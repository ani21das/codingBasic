#include<stdio.h>
int main(int argc, char const *argv[])
{
    char s[100];
    printf("input string:\n");
    scanf("%s",s);
    for(int i=0;s[i]!='\0';i++)
    {
        s[i]=97-s[i]+122; 
    }
    printf("output string:");
    printf("%s",s);
    return 0;
}
