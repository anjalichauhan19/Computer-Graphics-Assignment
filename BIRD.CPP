#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main()
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;
   int midx, midy;
   int stangle = 0, endangle = 360;
   int xradius = 50, yradius = 100;
   int x=300,y=200, start_angle=230,end_angle=90,radius=50;
   /* initialize graphics, local variables */
   initgraph(&gdriver, &gmode, "c://Turboc3//BGI");

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(CYAN);

   /* draw ellipse */
   setfillstyle(SOLID_FILL,CYAN);
   ellipse(midx, midy, stangle, endangle,
	   xradius, yradius);
   fillellipse(midx,midy,50,100);
   //draw arc
   setcolor(DARKGRAY);
   arc(x,y,start_angle,end_angle,radius);
   //Face & Eyes
   setcolor(CYAN);
   setfillstyle(SOLID_FILL,CYAN);
   circle(360,115,40);
   floodfill(360,115,CYAN);
   setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   circle(370,100,10);
   floodfill(370,100,WHITE);
   setcolor(BLACK);
   setfillstyle(EMPTY_FILL,BLACK);
   circle(375,99,5);
   floodfill(375,100,BLACK);
   //Beak
   setcolor(YELLOW);
   line(400,120,430,130);
   line(397,130,430,130);
   line(392,140,430,130);
   //Wings
   setcolor(YELLOW);
   line(270,280,150,330);
   line(275,290,150,350);
   line(280,300,150,370);
   line(285,310,150,390);
   line(290,320,150,410);
   line(150,330,150,410);
   //Legs
   setcolor(YELLOW);
   arc(350,330,0,90,10);
   arc(345,335,0,90,10);
   arc(335,340,90,270,6);
   //Tree
   setcolor(BROWN);
   line(300,370,390,310);
   line(300,380,390,320);
   line(300,370,300,380);
   line(390,310,390,320);

   /* clean up */
   getch();
   closegraph();
}

