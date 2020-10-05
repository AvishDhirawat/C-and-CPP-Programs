#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct term {
	      int coeff;
	      int exp;
	      struct term *p;
	    };
struct term *poly=NULL;
void createpoly1(int,int);
void createpoly2(int,int);
void add(struct term *,struct term *,struct term **);
void createpoly1(int c,int e)
{
 struct term *p1,*p2;
 p2=poly;
 p1=(struct term *)malloc(sizeof(struct term));
 p1->p=NULL;
 p1->coeff=c;
 p1->exp=e;
 if(poly==NULL)
 {
  poly=p1;
 }
 else
 {
  while(p2->p!=NULL)
  {
   p2=p2->p;
  }
  p2->p=p1;
 }
}
void createpoly2(int c,int e)
{
 struct term *p3,*p4;
 p4=poly;
 p3=(struct term *)malloc(sizeof(struct term));
 p3->p=NULL;
 p3->coeff=c;
 p3->exp=e;
 if(poly==NULL)
 {
  poly=p3;
 }
 else
 {
  while(p4->p!=NULL)
  {
   p4=p4->p;
  }
  p4->p=p3;
 }
}
void display()
{
 struct term *t;
 t=poly;
 printf("\nThe Polynomial is : ");
 while(t!=NULL)
 {
  printf("%dx^%d + ",t->coeff,t->exp);
  t=t->p;
 }
 printf("\b\b ");
}
void main()
{
 clrscr();
 createpoly1(7,3);
 createpoly1(9,2);
 createpoly1(3,0);
 createpoly2(17,3);
 createpoly2(19,2);
 createpoly2(13,0);
 display();
 getch();

}
 void add(struct term *p1,struct term *p2,struct term **p3)
{
 struct term *temp;
 if(p1==NULL)
 *p3=p2;
 if(*p2==NULL)
 *p3=p2;
 if(*p3==NULL)
 {
  temp=(struct term * )malloc(sizeof(struct term));
  *p3=temp;
  }
  else
   while(p1!=NULL&&p2!=NULL)
  temp=struct
  if(p1->exp>p2->exp)
  {
   temp->coff=
   else
   {
   if(p2->exp>p1->exp)
   {
    temp->coff=p2->coff;
    temp->exp=p2->exp;
    temp->coff
    }
  while(p1!=NULL)
  {
   temp->p=struct term* malloc(sizeof(struct term);
   while(p2!=NULL)
   {
    struct term* malloc (sizeof(struct term));
    }
    term->p=NULL;
    }