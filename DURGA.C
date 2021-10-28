#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main()
{
   /* request auto detection */
   int gdriver = DETECT, gmode;
   /* initialize graphics, local variables */
   initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
   /* draw ellipse */
   setcolor(RED);
   setfillstyle(SOLID_FILL,RED);
   ellipse(280, 50, 0, 360, 5, 20);
   floodfill(280,50,20);
   setcolor(WHITE);
   ellipse(280, 65, 180, 360, 50, 30);
   ellipse(280, 60, 180, 360, 50, 30);
   setcolor(RED);
   setfillstyle(SOLID_FILL,RED);
   ellipse(280, 120, 0, 360, 15, 15);
   floodfill(280,120,20);
   setcolor(WHITE);
   ellipse(100, 120, 190, 290, 70, 30);
   ellipse(100, 120, 190, 290, 70, 40);
   ellipse(150, 175, 0, 120, 70, 30);
   ellipse(150, 176, 0, 120, 70, 20);

   ellipse(420, 175, 60, 180, 70, 30);
   ellipse(420, 176, 60, 180, 70, 20);
   ellipse(468, 120, 260, 360, 70, 30);
   ellipse(468, 120, 260, 360, 70, 40);

   ellipse(150, 180, 180, 290, 50, 10);
   ellipse(170, 210, 0, 100, 50, 20);
   circle(190, 220, 15);
   ellipse(400, 210, 60, 180, 50, 10);
   ellipse(420, 180, 260, 340, 50, 20);
   circle(390, 225, 15);
   ellipse(160,209,170,360,60,30);
   ellipse(410,209,180,365,60,35);

   //nose
   ellipse(290,310,160,390,20,10);
   circle(328,300,20);
   ellipse(430,280,190,360,90,30);
   //lips
   ellipse(270,370,200,360,15,10);
   ellipse(300,370,180,340,15,10);
   ellipse(285,375,180,360,30,20);
   circle(330,240,250);
      getch();
   closegraph();
}