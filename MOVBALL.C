#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
int gd=DETECT, gm;
int x=100;
int y=100,i;
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
for(i=1;i<50;i++)
{
circle(x,y,30);
x=x+i;
delay(200);
cleardevice();
}
getch();
}