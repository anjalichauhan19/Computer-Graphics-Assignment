#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd = DETECT,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 //Building Border
 setfillstyle(SOLID_FILL,BROWN);
 rectangle(120,140,200,240);
 floodfill(121,141,15);
 rectangle(220,40,320,240);
 floodfill(221,41,15);
 //ground line
 line(120,240,320,240);
 //tree line
 line(400,140,400,240);
 line(400,240,420,240);
 line(420,240,420,140);
 setfillstyle(SOLID_FILL,WHITE);
 rectangle(140,150,180,180);
 floodfill(141,151,15);
 rectangle(140,200,180,230);
 floodfill(141,201,15);
 rectangle(240,60,300,90);
 floodfill(241,61,15);
 rectangle(240,110,300,140);
 floodfill(241,111,15);
 rectangle(240,160,300,190);
 floodfill(241,161,15);
 setfillstyle(SOLID_FILL,GREEN);
 circle(430,125,20);
 floodfill(431,125,15);
 circle(390,125,20);
 floodfill(391,126,15);
 circle(440,100,20);
 floodfill(441,101,15);
 circle(410,90,20);
 floodfill(411,91,15);
 circle(380,100,20);
 floodfill(381,101,15);
 getch();
}