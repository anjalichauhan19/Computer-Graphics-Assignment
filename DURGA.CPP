#include <graphics.h>
#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

void main()
{
   /* request auto detection */
   int gdriver = DETECT, gmode, errorcode;

   /* initialize graphics, local variables */
   initgraph(&gdriver, &gmode, "c://Turboc3//BGI");
   setcolor(BLACK);
   setfillstyle(SOLID_FILL,WHITE);
   //Top Eye
   ellipse(320, 80, 0, 360, 40, 60);
   fillellipse(320,80,40,60);
   setcolor(WHITE);
   setfillstyle(SOLID_FILL,BLACK);
   ellipse(320,105,0,360,20,30);
   fillellipse(320,105,20,30);
   //Moon
   setcolor(LIGHTGREEN);
   arc(320,90,180,0,60);
   arc(320,100,180,0,60);
   setcolor(MAGENTA);
   arc(320,170,180,0,10);
   //Bindi
   setcolor(RED);
   setfillstyle(SOLID_FILL,RED);
   circle(320,210,10);
   floodfill(320,210,RED);
   //Eyes
   setcolor(BLACK);
   setfillstyle(SOLID_FILL,WHITE);
   ellipse(150,250,0,360,80,30);
   fillellipse(150,250,80,30);
   setfillstyle(SOLID_FILL,BLACK);
   circle(150,260,20);
   floodfill(150,260,BLACK);
   setcolor(BLACK);
   setfillstyle(SOLID_FILL,WHITE);
   ellipse(490,250,0,360,80,30);
   fillellipse(490,250,80,30);
   setfillstyle(SOLID_FILL,BLACK);
   circle(490,260,20);
   floodfill(490,260,BLACK);
   //Eyebrows
   setcolor(WHITE);
   arc(150,300,50,150,130);
   arc(490,300,30,130,130);
   //Nose
   setcolor(WHITE);
   arc(320,350,220,320,40);
   setcolor(YELLOW);
   setfillstyle(HATCH_FILL,YELLOW);
   circle(265,390,40);
   floodfill(260,400,YELLOW);
   setcolor(BLACK);
   setfillstyle(EMPTY_FILL,BLACK);
   circle(265,390,35);
   floodfill(260,400,BLACK);
   setcolor(YELLOW);
   arc(170,300,200,300,120);
   setcolor(WHITE);
   arc(300,367,215,270,20);
   //Lips
   setcolor(RED);
   setfillstyle(SOLID_FILL,RED);
   ellipse(320,455,0,360,80,20);
   fillellipse(320,455,80,20);
   setcolor(LIGHTRED);
   line(240,455,400,455);
   /* clean up */
   getch();
   closegraph();
}


