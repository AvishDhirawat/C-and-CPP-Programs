#include<stdio.h>
struct pp
{
int a,b;
void pp1(int a, int b)
{
this->a=a;
this->b=b;
}
};
int main ()
{
struct pp a1;
a1.pp1(5,10);
printf("%d\n%d",a1.a,a1.b);
return(0);
}

