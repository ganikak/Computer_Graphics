
#include<stdio.h>
#include<conio.h>
#include<graphics.h>

void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
setcolor(BLUE);
rectangle(100,100,300,350);
setfillstyle(SOLID_FILL,BLUE);
floodfill(101,349,BLUE);
setcolor(YELLOW);
rectangle(110,110,290,340);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(111,339,YELLOW);
setcolor(BLACK);
line(200,230,200,150);
line(200,230,260,230);
line(200,150,190,160);
line(200,150,210,160);
line(260,230,250,220);
line(260,230,250,240);
outtextxy(195,120,"12");
outtextxy(195,320,"6");
outtextxy(280,227,"3");
outtextxy(120,227,"9");
getch();
}