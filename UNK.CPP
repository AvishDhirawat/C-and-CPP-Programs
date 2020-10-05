#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
 clrscr();
 int i=50,j=50,ic=1,jc=1;
 int gd=DETECT,gm;
 initgraph(&gm,&gm,"C:\\TC\\BGI");
 while((j<40)&&(j<=getmaxy()-40)&&(i>=40)&&(i<=getmaxx()-40))
 {
  pieslice(i,j,0,360,40);
  i=i+ic;
  j=j+jc;
  delay(0);
  getch();
  cleardevice();
  if(i==getmaxx()-40)
  ic=-1;
  else if(i==40)
  ic = 1;
  if(j==getmaxy()-80)
  jc=-1;
  else if(j==80)
  jc=1;
  getch();
  }
  getch();
  closegraph();
  }