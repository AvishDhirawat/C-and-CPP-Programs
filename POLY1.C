#include<stdio.h>
#include<conio.h>
#include<alloc.h>
#include<iostream.h>
struct poly
{
 int a,b;
 struct poly *p;
 }
 void create(int,int);
 void show();
 void main()
 {
 clrscr();
 create(4,3);
 create(7,2);
 create(3,1);
 create(9,0);
 printf("Equation is :\n");
 show();
 getch();
 }
 void show()
 {
  struct poly *p1=p;
  while(p1!=NULL)
  {
   printf("%d X^%d +",p1->a,p1->b);
   p1=p1->p;
   }
   printf("\b ");
   }