#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
setcolor(12);
circle(100,150,90);
setfillstyle(SOLID_FILL,12);
floodfill(100,150,12);
setcolor(YELLOW);
circle(100,150,80);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(100,150,YELLOW);
setcolor(BLACK);
circle(80,130,10);
setfillstyle(SOLID_FILL,BLACK);
floodfill(80,130,BLACK);
circle(120,130,10);
setfillstyle(SOLID_FILL,BLACK);
floodfill(120,130,BLACK);
rectangle(70,180,130,190);
setfillstyle(SOLID_FILL,BLACK);
floodfill(71,189,BLACK);
getch();
closegraph();
}