#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int gd = DETECT,gm;
 initgraph(&gd,&gm,"C:\\Turboc3\\BGI");
 line(320,240,520,240);
 line(320,240,320,40);
 outtextxy(300,245,"origin");
 setcolor(RED);
 line(320,240,420,240);
 line(420,240,420,140);
 line(420,140,425,145);
 line(420,140,415,145);
 setcolor(CYAN);
 outtextxy(430,140,"(X,Y)");
 outtextxy(370,245,"x");
 outtextxy(425,190,"y");
 setcolor(WHITE);
 line(520,240,515,235);
 line(520,240,515,245);
 line(320,40,325,45);
 line(320,40,315,45);
 outtextxy(525,240,"X");
 outtextxy(330,40,"Y");
 getch();
}