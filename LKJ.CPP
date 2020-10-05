#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
 int r;
 int bd=DETECT ,mg;
 initgraph (&bd,&mg,"C://TURBOC3//BGI");
 line (0,0,100,100);
 for (r=10;r<50;r+2)
 {
  circle(100,100,r);
  delay(600);
  clrscr();
  }
 getch();
 closegraph ();
 }
