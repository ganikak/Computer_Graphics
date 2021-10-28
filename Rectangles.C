#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
setcolor(RED);
rectangle(10,100,110,150);
setfillstyle(SOLID_FILL,RED);
floodfill(11,149,RED);

setcolor(BLUE);
rectangle(130,100,230,150);
setfillstyle(SOLID_FILL,BLUE);
floodfill(131,149,BLUE);

setcolor(YELLOW);
rectangle(10,170,110,220);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(11,219,YELLOW);

setcolor(GREEN);
rectangle(130,170,230,220);
setfillstyle(SOLID_FILL,GREEN);
floodfill(131,219,GREEN);
getch();
}