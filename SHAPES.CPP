#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd = DETECT,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 line(320,240,320,190);
 line(320,190,420,190);
 line(420,190,420,290);
 line(420,290,370,290);
 setfillstyle(SOLID_FILL,BLUE);
 circle(320,290,50);
 floodfill(321,291,15);
 line(270,290,220,290);
 line(220,290,270,165);
 line(270,165,320,240);

 getch();
}



