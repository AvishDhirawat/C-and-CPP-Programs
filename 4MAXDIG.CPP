#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,d;
printf("Enter Four Number : ");
scanf("%d %d %d %d",&a,&b,&c,&d);
if(d>c)
{
if(d>b)
{
if(d>a)
printf("%d is Greater",d);
else
printf("%d is Greater",a);
}
else
printf("%d is Greater",b);
}
else
printf("%d is Greater",c);
getch();
}