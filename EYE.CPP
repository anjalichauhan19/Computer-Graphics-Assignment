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
   int xradius = 100, yradius = 50;
   int aradius = 120, bradius = 70;

   /* initialize graphics, local variables */
   initgraph(&gdriver, &gmode, "c://Turboc3//BGI");

   midx = getmaxx() / 2;
   midy = getmaxy() / 2;
   setcolor(BLACK);

   /* draw ellipse */
   setcolor(WHITE);
   setfillstyle(SOLID_FILL,WHITE);
   ellipse(midx, midy, stangle, endangle,
	   xradius, yradius);
   fillellipse(midx,midy,xradius,yradius);
   ellipse(midx, midy, stangle,endangle, aradius, bradius);
   setcolor(WHITE);
   setfillstyle(SOLID_FILL,BLACK);
   setcolor(BLACK);
   circle(midx, midy, yradius);
   floodfill(midx,midy,BLACK);

   /* clean up */
   getch();
   closegraph();
}

