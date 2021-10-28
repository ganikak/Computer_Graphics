#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
setcolor(BLUE);
circle(300,200,60);
setfillstyle(SOLID_FILL,BLUE);
floodfill(300,200,BLUE);
setcolor(YELLOW);
circle(300,200,50);
setfillstyle(SOLID_FILL,YELLOW);
floodfill(300,200,YELLOW);
//vertical lines
setcolor(CGA_LIGHTMAGENTA);
line(200,170,200,240);
line(400,170,400,240);
line(150,170,150,240);
line(450,170,450,240);
line(100,170,100,240);
line(500,170,500,240);
line(50,170,50,240);
line(550,170,550,240);
//horizontal lines
setcolor(LIGHTBLUE);
line(50,170,248,170);
line(50,240,252,240);
line(550,170,352,170);
line(550,240,348,240);
//clock lines
setcolor(RED);
line(300,170,300,200);
line(300,200,330,200);
line(300,200,310,180);
//outtext
outtextxy(295,160,"12");
outtextxy(295,230,"6");
outtextxy(340,195,"3");
outtextxy(255,195,"9");
getch();
}