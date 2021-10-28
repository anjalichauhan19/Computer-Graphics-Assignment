#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd = DETECT,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 rectangle(10,10,210,210);
 setfillstyle(SOLID_FILL,RED);
 circle(110,110,50);
 floodfill(112,112,15);
 getch();
}


