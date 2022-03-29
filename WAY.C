#include <graphics.h>  
#include <stdlib.h>  
#include <stdio.h>  
#include <conio.h>  
void pixel(int,int,int);
int mx,my;
void main()
{
int a=0;
int b;
int x,y,r,d;
initgraph(&a,&b,"C:\\TURBOC3\\BGI");
printf("\n\t Enter the radius:----");
scanf("%d",&r);
x=0;
y=r;
// d=3-2*r;
d=1-r;
mx=getmaxx()/2;
my=getmaxy()/2;
setcolor(2);
line(mx,0,mx,getmaxy());
line(0,my,getmaxx(),my);
pixel(x,y,4);
while(x<=y)
{
x++;
if(d<0)
d=d+2*x+3;
// d=d+4*x+6;
else
{ y--;
// d=d+4*(x-y)+10;
d=d+2*(x-y)+5;
}
delay(100);
{
pixel(x,y,1);
pixel(x,-y,9);
pixel(-x,-y,3);
pixel(-x,y,10);
pixel(y,x,5);
pixel(y,-x,6);
pixel(-y,-x,7);
pixel(-y,x,8);
}
}
getch();

}
void pixel(int x,int y,int p)
{
putpixel(x+mx,my-y,p);
}