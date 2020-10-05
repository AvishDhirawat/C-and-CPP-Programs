#include<iostream.h>
#include<conio.h>
#include<string.h>
class student
{
 int roll,age;
 char name[30];
 public:
   student(int a,int b,char c[30])
   {
    roll=a;
    age=b;
    strcpy(name,c);
    }
    void display()
    {
     cout<<"\nRoll No. of Student = "<<roll;
     cout<<"\nAge of Student = "<<age;
     cout<<"\nName of Student = "<<name;
     }
     };
     void main()
     {
      clrscr();
      student t1(48,18,"Chirag");
      t1.display();
      student t2(61,19,"Gaurav");
      t2.display();
      getch();
      }
