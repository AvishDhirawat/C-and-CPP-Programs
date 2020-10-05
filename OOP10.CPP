#include<conio.h>
#include<iostream>
using namespace std;
class  matrix
{
 int a[5][5],b[5][5],i,j,m,n;
 public:
 void input()
 {
  cout<<"\nEnter the Order of First Matrix :";
  cin>>m>>n;
  cout<<"\nEnter Elements :";
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  cin>>a[i][j];
  cout<<"\nEnter the Order of Second Matrix :";
  cin>>m>>n;
  cout<<"\nEnter Elements :";
  for(i=0;i<m;i++)
  for(j=0;j<n;j++)
  cin>>b[i][j];
  }
   void addition(int m1,int m2)
  {
    int x[5][5];
    cout<<"\nAfter Addition :\n";
    for(int i=0;i<m;i++)
    {
    for(int j=0;j<n;j++)
    {
    x[i][j]=m1*a[i][j]+m2*b[i][j];
    cout<<x[i][j]<<"\t";
    }
    cout<<"\n";
    }
    cout<<"Endlist";
    }
   void subtract(int m1,int m2)
  {
    int x[5][5];
    cout<<"\nAfter Subtraction  :\n";
    for(int i=0;i<m;i++)
    {
    for(int j=0;j<n;j++)
    {
    x[i][j]=m1*a[i][j]-m2*b[i][j];
    cout<<x[i][j]<<"\t";
    }
    cout<<"\n";
    }
    cout<<"Endlist";
    }
    };
    int main()
    {
     matrix s;
     s.input();
     s.addition(1,1);
     s.subtract(1,1);
     getch();
     }
