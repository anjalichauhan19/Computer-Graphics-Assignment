#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd = DETECT,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 setfillstyle(SOLID_FILL,YELLOW);
 circle(320,240,100);
 floodfill(321,241,15);
 setfillstyle(SOLID_FILL,BLACK);
 circle(270,190,15);
 floodfill(271,191,15);
 setfillstyle(SOLID_FILL,BLACK);
 circle(370,190,15);
 floodfill(371,191,15);
 setcolor(BLACK);
 line(270,265,370,265);
 getch();
}