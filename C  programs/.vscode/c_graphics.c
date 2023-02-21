#include<stdio.h>
int main(int argc, char const *argv[])
{
    int gdriver=DETECT,gmode,x,y;
    initgraph(&gdriver,&gmode,"c:\Users\91747\c and c++ prog\.vscode\");
    rectangle(0,0,639,479);
    line(0,0,639,479);
    line(0,479,639,479);
    x=320;
    y=240;
    putpixel(x,y,RED);
    putpixel(300,340,10);
    putpixel(340,20,15);
  
}
