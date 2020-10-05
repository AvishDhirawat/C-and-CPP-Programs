#include<stdio.h>
using namespace std;
class pp
{
int a,b;
public:
void pp1(int a, int b)
{
this->a=a;
this->b=b;
}
};
int main ()
{
pp a1;
a1.pp1(5,10);
cout<<a1.a;
cout<<a1.b
return(0);
}

