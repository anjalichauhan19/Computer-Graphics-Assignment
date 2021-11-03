#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
 int gd=DETECT,gm;
 int i;
 initgraph(&gd,&gm,"C:\\TurboC3\\BGI");
 for(i=0;i<=200;i--)
{
 setcolor(MAGENTA);
 setfillstyle(SOLID_FILL,MAGENTA);
 //Body
 ellipse(320,400+i,0,360,25,50);
 fillellipse(320,400+i,25,50);
 setcolor(MAGENTA);
 setfillstyle(SOLID_FILL,MAGENTA);
 //Face
 circle(320,330+i,20);
 floodfill(320,330+i,MAGENTA);
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,WHITE);
 //Left Eye
 circle(310,325+i,5);
 floodfill(310,325+i,WHITE);
 setcolor(BLACK);
 setfillstyle(EMPTY_FILL,BLACK);
 //Left Eye Cornea
 circle(310,325+i,1);
 floodfill(310,325+i,BLACK);
 setcolor(MAGENTA);
 //Left upper wing
 arc(300,307+i,300,90,10);
 setcolor(MAGENTA);
 setfillstyle(SOLID_FILL,MAGENTA);
 //Left upper wing circle
 circle(300,300+i,2);
 floodfill(300,300+i,MAGENTA);
 setcolor(WHITE);
 setfillstyle(SOLID_FILL,WHITE);
 //Right Eye
 circle(330,325+i,5);
 floodfill(330,325+i,WHITE);
 setcolor(BLACK);
 setfillstyle(EMPTY_FILL,BLACK);
 //Right Eye Cornea
 circle(330,325+i,1);
 floodfill(330,325+i,BLACK);
 setcolor(MAGENTA);
 //Right upper wing
 arc(340,307+i,90,230,10);
 setcolor(MAGENTA);
 setfillstyle(SOLID_FILL,MAGENTA);
 //Right upper wing circle
 circle(340,300+i,2);
 floodfill(340,300+i,MAGENTA);
 setcolor(MAGENTA);
 //Left wings
 arc(285,370+i,0,270,15);
 arc(285,420+i,90,315,35);
 //Rigt wings
 arc(355,370+i,270,180,15);
 arc(355,420+i,225,90,35);
 delay(100);
 cleardevice();
}
 getch();
}