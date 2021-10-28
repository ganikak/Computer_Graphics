#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
rectangle(200,150,450,350);
setcolor(RED);
setfillstyle(SOLID_FILL,RED);
circle(330,250,30);
floodfill(330,250,RED);
getch();
}