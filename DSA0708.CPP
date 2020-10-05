#include<stdio.h>
#include<conio.h>
#include<alloc.h>
struct node
{
 int a;
 struct node *p;
 };
void mknode(struct node **,int);
void show(struct node **);
void main()
{
 struct node *header1;
 struct node *header2;
 clrscr();
 header1=NULL;
 header2=NULL;
 mknode(&header1,50);
 mknode(&header1,10);
 mknode(&header2,20);
 mknode(&header2,40);
 show(&header1);
 show(&header2);
 getch();
 }
 void mknode(struct node **h1,int t)
 {
  struct node *tmp,*t1;
  tmp=(struct node *) malloc(sizeof(struct node ));
  tmp->a=t;
  tmp->p=NULL;
  if(*h1==NULL)
  *h1=tmp;
  else
  {
  t1=*h1;
  while(t1->p!=NULL)
  t1=t1->p;
  t1->p=tmp;
  }
  }
  void show(struct node **h1)
  {
  struct node *tmp=*h1;
  printf("\nNow List is :\n");
  while(tmp!=NULL)
  {
   printf("-->%d\n",tmp->a);
   tmp=tmp->p;
   }
   }