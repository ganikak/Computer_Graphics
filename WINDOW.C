#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void DDA(int x0, int y0, int x1, int y1)
{
 int dx=(float)(x1-x0);
 int dy=(float)(y1-y0);
 int steps;
 int x;
 int y;
 int i;
 if(dx>=dy)
	 {
	 steps=dx;
	 }
 else
	 {
	 steps=dy;
	 }
 dx=dx/steps;
 dy=dy/steps;
 x=x0;
 y=y0;
 i=1;
 while(i<=steps)
 {
     putpixel(x, y, RED);
     x+=dx;
     y+=dy;
     i=i+1;
 }
}
void main()
{
 int gd=DETECT, gm;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 DDA(170,150,170,280);
 DDA(230,150,230,280);
 DDA(170,150,350,190);
 DDA(170,280,350,280);
 DDA(290,150,300,280);
 DDA(350,150,230,280);
 DDA(170,170,350,160);
 DDA(170,175,350,166);
 DDA(170,260,350,130);
 DDA(170,255,350,130);
 getch();
 closegraph();
}