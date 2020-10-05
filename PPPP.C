#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct term {
	      int coeff;
	      int exp;
	      struct term *p;
	    };
struct term *poly=NULL;
void createpoly();
void createpoly()
{
 struct term *p1,*p2;
 int c,e,m,i;
 p2=poly;
 p1=(struct term *)malloc(sizeof(struct term));
 p1->p=NULL;
 printf("Enter the Order of Polynomial : ");
 scanf("%d",&m);
 for(i=0;i<m;i++)
 {
 printf("Enter the Expression for Poly1 :-\n");
 printf("\nEnter Coefficient Part : ");
 scanf("%d",&c);
 printf("\nEnter Exponential Part : ");
 scanf("%d",&e);
 }
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
int main()
{

 createpoly(7,3);
 createpoly(9,2);
 createpoly(3,0);
 display();
 return 0;

}

void add(struct term *,struct term *,struct term **)
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