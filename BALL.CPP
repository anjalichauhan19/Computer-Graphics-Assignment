#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
int gd=DETECT,gm;
int i,x=50,y=100,a=60,b=220;
//change BGI directory according yo your
initgraph(&gd,&gm,"//Turboc3//BGI");
for(i=10;i<=200;i++)
{
 setcolor(BLUE);
 setfillstyle(SOLID_FILL,BLUE);
 circle(x,y,40);
 floodfill(x,y,BLUE);
 x=x+i;
 setcolor(RED);
 setfillstyle(SOLID_FILL,RED);
 circle(a,b,40);
 floodfill(a,b,RED);
 a=a+i;
 delay(200);
 cleardevice();
}
getch();
}
