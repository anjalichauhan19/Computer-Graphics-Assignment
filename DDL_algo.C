#include<stdio.h>
#include<graphics.h>
#include<conio.h>

void main()
{
 int i,gd=DETECT,gm;
 float x,y,dx,dy,steps;
 int x0,x1,y0,y1;

 initgraph(&gd,&gm,"c:\\turboc3\\bgi");
 setcolor(WHITE);
 printf("Enter the value of x0 and y0 : ");
 scanf("%d%d", &x0,&y0);
 printf("Enter the value of x1 and y1: ");
 scanf("%d%d", &x1,&y1);

 dx=(float)(x1-x0);
 dy=(float)(y1-y0);

   if(dx>=dy)
   steps=dx;
 else
   steps=dy;

 dx=dx/steps;
 dy=dy/steps;
 x=x0;
 y=y0;
 i=1;

 while(i<=steps)
 {
  putpixel(x,y,CYAN);
  x=x+dx;
  y=y+dy;
  i=i+1;
 }
 getch();
 closegraph();
}