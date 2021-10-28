#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main()
{
   /* request auto detection */
   int gdriver = DETECT, gmode;
   int midx, midy;
   /* initialize graphics, local variables */
   initgraph(&gdriver, &gmode, "C:\\TurboC3\\BGI");
   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(getmaxcolor());

   /* draw ellipse */
   setcolor(GREEN);
   ellipse(240, 120, 0, 360, 40, 50);
   setcolor(GREEN);
  // setfillstyle(SOLID_FILL,10);
   ellipse(200, 200,90, 390, 50, 60);
  // floodfill(200,200,GREEN);
   ellipse(170, 170, 244, 390,40, 50);
   setcolor(WHITE);
   circle(250,110,8);
   ellipse(252,106,160,330,6,6);
   setcolor(RED);
   line(280,115,300,115);
   line(278,105,300,115);
   line(280,125,300,115);
   ellipse(235,250,-50,90,8,6);
   ellipse(230,255,-50,90,8,6);
   //stick
   setcolor(6);
   line(200,290,270,230);
   line(195,285,265,225);
   line(195,285,200,290);
   line(265,225,270,230);
   //feather
   setcolor(10);
   line(60,230,60,280);
   line(60,230,150,215);
   line(60,280,162,240);
   line(60,245,155,225);
   line(60,265,158,235);
   //line();
   /* clean up */
   getch();
   closegraph();
}