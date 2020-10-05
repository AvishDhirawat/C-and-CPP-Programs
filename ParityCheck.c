//Program of Parity Checking
//Author - Avish Dhirawat
//Dated - 04-April-2019
#include<stdio.h>

int main()
{
 int a[20],n,m,b[20];
 int i=0,p,count=0;
 printf("\nEnter a Number : ");
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
   if(b[i] == 1)
    count++;
   }
  if(count%2 == 0)
   printf("\nNumber of 1's is Even");
 else 
   printf("\nNumber of 1's is Odd");
  printf("\nEnter the Parity You Want : ");
  printf("\n1.Even \t2.Odd\n");
  scanf("%d",&p);
  if(p==1)
   {
     if(count%2!=0)
        b[n]=1;
	else
 	  b[n]=0;
}
else
{
if(p==2)
  {
    if(count%2==0)
    b[n]=1;
  else
    b[n]=0;
 }
else
  printf("Invalid Input....\nTry Entering a valid one......\n");
}
printf("\nThe Number in Binary format after Parity : ");
for(i=0;i<n+1;i++)
printf("%d",b[i]);
printf("\n");
return 0;
}
       