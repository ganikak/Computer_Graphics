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
  putpixel(x,y,YELLOW);
  x=x+dx;
  y=y+dy;
  i=i+1;
 }
}
void main()
{
 int gd = DETECT, gm;
 int x0 = 200, y0 = 200, x1 = 200, y1 = 400;
 //Initialize graphics function
 initgraph (&gd, &gm, "C:\\turboc3\\bgi");
 DDA(100,200,100,300);
 DDA(300,200,300,300);
 DDA(100,200,200,100);
 DDA(200,100,300,200);
 DDA(100,200,300,200);
 DDA(100,300,300,300);
 DDA(170,250,230,250);
 DDA(170,250,170,300);
 DDA(230,250,230,300);
 getch();
}