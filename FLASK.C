#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<math.h>

void DDA(int x0, int y0, int x1, int y1)
{
 int dx=(int)(x1-x0);
 int dy=(int)(y1-y0);
 int steps;
 int x,y,i;
 if(dx>=dy)
  steps=dx;
 else
  steps=dy;
 {
  dx=dx/steps;
  dy=dy/steps;
  x=x0;
  y=y0;
  i=1;
 }
 while(i<=steps)
 {
  putpixel(x,y,CYAN);
  x=x+dx;
  y=y+dy;
  i=i+1;
 }
}
void main()
{
 //int x0 = 250, y0 = 150, x1 = 250, y1 = 210;
 int gd = DETECT, gm;
 //Initialize graphics function
 initgraph (&gd, &gm, "C:\\turboc3\\bgi");
 DDA(250, 150, 250, 210);
 DDA(290, 150, 290, 210);
 DDA(250, 210, 200, 250);
 DDA(290, 210, 330, 250);
 DDA(210, 250, 330, 250);
getch();
}
