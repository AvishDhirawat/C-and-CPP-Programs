#include<conio.h>
#include<iostream.h>
class rectangle
{
 int l,w;
 public:
  rectangle()
  {
   l=0;
   w=0;
   }
   rectangle(int x,int y)
   {
    l=x;
    w=y;
    }
    void display()
    {
     cout<<"\nLength of the Rectangle = "<<l;
     cout<<"\nWidth of the Rectangle = "<<w;
     }
     };
     void main()
     {
     clrscr();
     rectangle s;
     s.display();
     rectangle s1(25,10);
     rectangle s2(55,30);
     s1.display();
     s2.display();
     getch();
     }
