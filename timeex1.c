#include<stdio.h>
#include<time.h>
void main()
{
 clock_t t;
 t = clock();
 printf("Enter a Number : ");
 int a;
 scanf("%d",&a);
 printf("1. - Sum\t2. - Subtraction\n3. - Multiplication\t4. - Division\n");
 printf("Enter Your Choice : ");
 int n;
 scanf("%d",&n);
 printf("Enter another Number : ");
 int b;
 scanf("%d",&b);
 int c = 0;
 int d = 0;
 switch(n)
 {
  case 1 : {
  	printf("After Addition\n");
  	c = a+b;
  	break;
  }
  case 2 : {
  	printf("On Subtraction\n");
  	c = a-b;
  	break;
  }
  case 3 : {
  	printf("On Multiplication\n");
  	c = a*b;
  	break;
  }
  case 4 : {
  	printf("On Division\n");
  	c = a/b;
  	d = a%b;
  	break;
  }
  default : {
  	printf("\nInvalid Selection...\nPlease Enter a vaild Choice....\nExiting......");
  }
}
  printf("\nAnswer is = %d",c);
  if(d!=0)
  	printf("\nRemainder =  %d ",d);
  float x;
 t = clock() - t;
 x = t;
 printf("\nTime Taken by Program : ");
 printf("\nIn Mili Seconds = %f",x);
 x = x/1000;
 printf("\nIn Seconds = %f \n",x);
}