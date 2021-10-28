#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd = DETECT,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 setfillstyle(CLOSE_DOT_FILL,BROWN);
 circle(320,240,100);
 floodfill(321,241,15);
 setfillstyle(EMPTY_FILL,BLACK);
 circle(320,240,75);
 floodfill(321,241,15);
 setfillstyle(LTBKSLASH_FILL,LIGHTCYAN);
 circle(320,240,15);
 floodfill(321,241,15);
 setcolor(LIGHTGRAY);
 line(247,230,305,240);
 line(393,230,335,240);
 line(330,167,320,225);
 line(280,304,315,255);
 line(360,302,330,252);
 getch();
}