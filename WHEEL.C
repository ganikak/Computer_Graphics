#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
setcolor(YELLOW);
setfillstyle(SOLID_FILL,RED);
circle(150,150,80);
floodfill(150,150,YELLOW);
setcolor(BLACK);
setfillstyle(SOLID_FILL,BLACK);
circle(150,150,70);
floodfill(150,150,BLACK);
setcolor(WHITE);
setfillstyle(SOLID_FILL,WHITE);
line(100,200,200,100);
line(150,220,150,80);
line(80,150,220,150);
line(100,100,200,200);
getch();
closegraph();

}