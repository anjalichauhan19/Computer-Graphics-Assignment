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
  putpixel(x,y,RED);
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
 DDA(350,200,250,300);
 DDA(350,200,450,300);
 DDA(250,300,450,300);
 DDA(250,300,250,400);
 DDA(450,300,450,400);
 DDA(320,350,320,400);
 DDA(380,350,380,400);
 DDA(320,350,380,350);
 DDA(250,400,450,400);

 getch();
}