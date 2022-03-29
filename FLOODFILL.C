#include<stdio.h>
#include<graphics.h>
#include<dos.h>
#include<conio.h>

void floodFill(int x,int y,int oldcolor,int newcolor)
{
delay(0);
if(getpixel(x,y) == oldcolor)
{
putpixel(x,y,newcolor);
floodFill(x+1,y,oldcolor,newcolor);
floodFill(x,y+1,oldcolor,newcolor);
floodFill(x-1,y,oldcolor,newcolor);
floodFill(x,y-1,oldcolor,newcolor);
}
}

void main()
{
int gm,gd=DETECT;
initgraph(&gd,&gm,"c:\\turboc3\\bgi");
rectangle(100,100,150,150);
floodFill(101,149,0,7);
circle(200,200,30);
floodFill(201,199,0,13);
getch();
closegraph();

}