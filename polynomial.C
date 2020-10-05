#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct term {
	      int coeff;
	      int exp;
	      struct term *p;
	    };
struct term *poly=NULL;
void createpoly(int,int);
void display();
void add(struct node*,struct node *);
int main()
{

 createpoly(7,3);
 createpoly(9,2);
 createpoly(3,1);
 createpoly(5,0);
 display();
 getch();
 return 0;

}
void createpoly(int c,int e)
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

void display()
{
 struct term *t;
 t=poly;
 printf("the polynomial is :\n");
 while(t!=NULL)
 {
  printf("%dx^%d + ",t->coeff,t->exp);
  t=t->p;
 }
 printf("\b\b ");
}
