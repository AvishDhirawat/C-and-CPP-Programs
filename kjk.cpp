#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
 	int r;
 	int gd = DETECT , gm;
 	initgraph(&gd,&gm,"C://TC//BGI");
 	for (r=40;r<100;r+5)
 	{
 		circle(150,150,r);
 		delay(60);
	 }
	 closegraph();
}
