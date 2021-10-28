#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd = DETECT,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 setfillstyle(SOLID_FILL,GREEN);
 rectangle(10,100,110,150);
 floodfill(11,101,15);
 setfillstyle(SOLID_FILL,RED);
 rectangle(160,100,260,150);
 floodfill(161,101,15);
 setfillstyle(SOLID_FILL,YELLOW);
 rectangle(10,200,110,250);
 floodfill(11,201,15);
 setfillstyle(SOLID_FILL,BLUE);
 rectangle(160,200,260,250);
 floodfill(161,201,15);
 getch();
}



