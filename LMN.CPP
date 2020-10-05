#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 int r;
 int bd=DETECT ,mg;
 initgraph (&bd,&mg,"C://TURBOC3//BGI");
 line (0,0,100,100);
 for (r=10;r<20;r++)
 {
  circle(100,100,r);
  delay(300);
  clrscr();
  }
 getch();
 closegraph ();
 }
