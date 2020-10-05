#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
 struct node *p;
 int a;
 };
 struct node *tmp;
 void level(struct node *p1,int h)
 {
  if(h==1)
  printf("%d",p->a);
  else
  {
   level(p->lc,h-1);
   level(p->rc,h-1);
   }
   }
  void