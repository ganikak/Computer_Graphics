#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
setcolor(12);
line(160,180,80,260);
line(160,180,240,260);
line(80,260,240,260);
setfillstyle(SOLID_FILL,12);
floodfill(161,259,12);
setcolor(5);
rectangle(210,210,280,260);
setfillstyle(SOLID_FILL,5);
floodfill(211,259,5);
setcolor(3);
setfillstyle(SOLID_FILL,3);
circle(200,270,30);
floodfill(200,270,3);
getch();
closegraph();
}