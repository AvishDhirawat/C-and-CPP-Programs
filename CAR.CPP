#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
 int gd=DETECT,gm;
 char a[10];
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 int x,y,i;
 setcolor(BLUE);
 setbkcolor(RED);
 x=0;
 y=0;
 line(130+x,120+y,100+x,120+y);
 line(100+x,120+y,100+x,100+y);
 line(100+x,100+y,130+x,100+y);
 line(130+x,100+y,180+x,70+y);
 line(180+x,70+y,250+x,70+y);
 line(250+x,70+y,300+x,100+y);
 line(300+x,100+y,300+x,120+y);
 line(300+x,120+y,280+x,120+y);
 arc(150,140,60,120,20);
 arc(260,140,60,120,20);
 circle(150,140,10);
 circle(260,140,10);2
 getch();
 closegraph();
 }