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
 for(i=0;i<=200;i++)
{
 setcolor(RED);
 //Window
 rectangle(100+i,100,200+i,150);
 //Window Partition
 line(150+i,100,150+i,150);
 //Car Body
 line(90+i,90,210+i,90);
 line(90+i,90,90+i,150);
 line(210+i,90,210+i,150);
 line(210+i,150,300+i,190);
 line(90+i,150,0+i,190);
 line(0+i,190,10+i,200);
 line(300+i,190,290+i,200);
 line(10+i,200,290+i,200);
 line(100+i,150,10+i,200);
 line(200+i,150,290+i,200);
 line(0+i,190,0+i,250);
 line(300+i,190,300+i,250);
 line(0+i,250,50+i,250);
 line(300+i,250,250+i,250);
 //Left Wheel Shape
 arc(80+i,250,0,180,30);
 //Right Wheel Shape
 arc(220+i,250,0,180,30);
 line(110+i,250,190+i,250);
 setcolor(DARKGRAY);
 setfillstyle(SOLID_FILL,DARKGRAY);
 //Left Wheel
 circle(80+i,250,20);
 floodfill(80+i,250,DARKGRAY);
 setcolor(DARKGRAY);
 setfillstyle(SOLID_FILL,DARKGRAY);
 //Right Wheel
 circle(220+i,250,20);
 floodfill(220+i,250,DARKGRAY);
 setcolor(BLACK);
 setfillstyle(EMPTY_FILL,BLACK);
 //Left Wheel Center
 circle(80+i,250,3);
 floodfill(80+i,250,BLACK);
 setcolor(BLACK);
 setfillstyle(EMPTY_FILL,BLACK);
 //Right Wheel Center
 circle(220+i,250,3);
 floodfill(220+i,250,BLACK);
 delay(100);
 cleardevice();
}
 getch();
}