#include<stdio.h>
#include<conio.h>
int power(int,int);
void main()
{
clrscr();
int a,b,c;
scanf("%d%d",&a,&b);
c=power(a,b);
printf("%d",c);
getch();
}
int power(int x,int y)
{
int t;
if(y==0)
{
return(1);
}
else
{
t=x*power(x,y-1);
}
return(t);
}