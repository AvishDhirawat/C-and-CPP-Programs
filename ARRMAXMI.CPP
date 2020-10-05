#include<stdio.h>
#include<conio.h>
#define Max_Size 100
void main()
{
 clrscr();
 int a[Max_Size],i,max,min,size;
 printf("Enter Size of Array : ");
 scanf("%d",&size);
 printf("Enter the Elements : ");
 for (i=0;i<size;i++);
 {
  scanf("%d",&a[i]);
  }
  max=a[0];
  min=a[0];
  for (i=1;i<size;i++)
  {
   if(a[i]>max)
   {
    max = a[i];
    }
    if(a[i]<min)
    {
     min = a[i];
     }
     }
     printf("Maximum Element is : %d",max);
     printf("Minimum Element is : %d",min);
     getch();
     }