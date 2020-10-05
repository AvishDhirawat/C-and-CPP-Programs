#include<stdio.h>
#include<conio.h>
int pow(int,int);
int main()
{
clrscr();
int p,q,r;
printf("Enter the Base and Power : ");
scanf("%d %d",&p,&q);
r=pow(p,q);
printf("r = %d",r);
getch();
}
int pow(int x,int y)
{ int z=x;
if (y==0)
return 1;
else
while(y>0)
{  z=z*z;
   y=y--;

}
return x;
}