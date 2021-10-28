#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

void main()
{
   int gd=DETECT,gm;
   int i;
   initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
  for(i=10;i<=600;i=i+50)
  {
   line(60+i,150,170+i,150);
   line(60+i,150,60+i,190);
   line(170+i,150,170+i,190);
   rectangle(70+i,160,160+i,180);
   line(115+i,160,115+i,180);
   line(10+i,210,60+i,190);
   line(170+i,190,220+i,210);
   rectangle(10+i,210,220+i,250);
   line(40+i,210,60+i,190);
   line(170+i,190,190+i,210);
   ellipse(60+i,250,180,360,10,10);
   ellipse(170+i,250,180,360,10,10);
   ellipse(60+i,250,180,360,5,5);
   ellipse(170+i,250,180,360,5,5);
  delay(200);
  cleardevice();}

getch();
closegraph();
}