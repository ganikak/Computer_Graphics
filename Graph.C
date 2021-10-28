#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
outtextxy(150,240,"origin");
outtextxy(190,130,"y");
outtextxy(300,230,"x");
//arrow top
line(210,160,200,150);
line(190,160,200,150);
//arrow left
line(280,220,290,230);
line(280,240,290,230);
//white lines
line(200,230,200,150);
line(230,230,290,230);

setcolor(RED);
outtextxy(230,240,"x");
outtextxy(265,210,"y");
outtextxy(270,180,"(x,y)");
line(260,190,260,230);
line(200,230,260,230);
setcolor(GREEN);
circle(260,190,2);
setfillstyle(SOLID_FILL,GREEN);
floodfill(260,190,GREEN);
getch();
}