#include<stdio.h>
#include<conio.h>
struct poly
{
 int c;
 int e;
 }
 p1[50],p2[50],p3[50],temp;
 void main()
 {
  int i,j,k,m,n,t;
  clrscr();
  printf("\nEnter the Number of Elements in Poly1 : ");
  scanf("%d",&m);
  for(i=0;i<m;i++)
  {
   printf("\nEnter the Coefficient : ");
   scanf("%d",&p1[i].c);
   printf("\nEnter the Exponent : ");
   scanf("%d",&p1[i].e);
   }