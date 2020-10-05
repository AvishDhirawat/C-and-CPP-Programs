#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int a[5],i,sum=0;
printf("Enter the Elements : ");
for(i=1;i<=5;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=5;i++)
{
sum+=a[i];
 }
 printf("The Sum of all Elements is = %d",sum);
 getch();
 }
