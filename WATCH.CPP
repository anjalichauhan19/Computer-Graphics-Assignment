#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd = DETECT,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 setfillstyle(HATCH_FILL,BLUE);
 circle(320,240,100);
 floodfill(321,241,15);
 setfillstyle(CLOSE_DOT_FILL,LIGHTGRAY);
 circle(320,240,90);
 floodfill(321,241,15);
 setcolor(LIGHTCYAN);
 line(240,180,10,180);
 line(240,300,10,300);
 line(10,180,10,300);
 line(400,180,630,180);
 line(400,300,630,300);
 line(630,180,630,300);
 line(430,180,430,300);
 line(490,180,490,300);
 line(550,180,550,300);
 line(610,180,610,300);
 line(210,180,210,300);
 line(150,180,150,300);
 line(90,180,90,300);
 line(30,180,30,300);
 setcolor(YELLOW);
 putpixel(320,240,GREEN);
 outtextxy(320,155,"12");
 outtextxy(320,320,"6");
 outtextxy(400,240,"3");
 outtextxy(235,240,"9");
 outtextxy(370,170,"1");
 outtextxy(395,200,"2");
 outtextxy(390,280,"4");
 outtextxy(360,310,"5");
 outtextxy(275,310,"7");
 outtextxy(245,280,"8");
 outtextxy(240,200,"10");
 outtextxy(265,170,"11");
 setcolor(MAGENTA);
 line(320,240,320,170);
 line(320,170,325,175);
 line(320,170,315,175);
 line(320,240,355,240);
 line(355,240,350,235);
 line(355,240,350,245);
 setcolor(WHITE);
 putpixel(320,242,WHITE);
 putpixel(320,244,WHITE);
 putpixel(320,246,WHITE);
 putpixel(320,248,WHITE);
 putpixel(320,250,WHITE);
 putpixel(320,252,WHITE);
 putpixel(320,254,WHITE);
 putpixel(320,256,WHITE);
 putpixel(320,258,WHITE);
 putpixel(320,260,WHITE);
 putpixel(320,262,WHITE);
 putpixel(320,264,WHITE);
 line(320,264,325,259);
 line(320,264,315,259);
 getch();
}