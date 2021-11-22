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
 int gd = DETECT, gm;
 int x0 = 200, y0 = 200, x1 = 200, y1 = 400;
 //Initialize graphics function
 initgraph (&gd, &gm, "C:\\turboc3\\bgi");
 DDA(200,200,200,300);
 DDA(250, 200, 250, 300);
 DDA(200, 300, 150, 350);
 DDA(250, 300, 300, 350);
 DDA(150,350,300,350);
 DDA(150,350,150,370);
 DDA(300,350,300,370);
 DDA(150,370,300,370);
 getch();
}