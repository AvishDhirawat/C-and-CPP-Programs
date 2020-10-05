#include<stdio.h>
#include<iostream>
using namespace std;
class complex
{
    float r,i;
public:
    complex()
    {
        r=0.0;
        i=0.0;
    }
    complex(double a, double b)
    {
        r=a;
        i=b;
    }
    void add(complex o1, complex o2)
    {
        double x,y;
        x = o1.r+o2.r;
        y = o1.i+o2.i;
        cout<<x<<"+"<<y<<"i";
    }
};
int main()
{
    complex c1(4.1,2.2),c2(5.9,2.8);
    c1.add(c1,c2);
}
