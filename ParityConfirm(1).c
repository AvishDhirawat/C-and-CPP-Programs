//Program of Parity Checking
//Author - Avish Dhirawat
//Dated - 04-April-2019
#include<stdio.h>

int main()
{
 int a[20],n,m,b[20];
 int i=0,p,count=0;
 printf("\nEnter a Number with Even Parity in Decimal : ");
 scanf("%d",&m);
 printf("\n%d in Binary System is : ",m);
 while(m != 0)
 {
   a[i] = m%2;
   m = m/2;
   i++;
   n=i;
 }
for(i=0;i<n;i++)
 b[i]=a[n-i-1];
 for(i=0;i<n;i++)
  {
   printf("%d",b[i]);
   }
for(i=0;i<n-1;i++)
 {
   if(b[i]==1)
    count++;
 }
printf("\nEnter the Parity Checking Pattern :\n");
printf("1.Even\t2.Odd\n");
scanf("%d",&p);
if(p==1)
{
if(b[n-1]==0&&count%2==0)
 printf("\nThe Data is Confirmed....\nThe Parity is Correct\n");
else
{
if(b[n-1]==1&&count%2==1)
 printf("\nThe Data is Confirmed....\nThe Parity is Correct\n");
else
 printf("\nIncorrect Parity...\n");
}
}
else
{
 if(p==2)
{
if(b[n-1]==1&&count%2==0)
 printf("\nThe Data is Confirmed....\nThe Parity is Correct\n");
else
{
if(b[n-1]==0&&count%2==1)
 printf("\nThe Data is Confirmed....\nThe Parity is Correct\n");
else
 printf("\nIncorrect Parity...\n");
}
}
}
return 0;
}