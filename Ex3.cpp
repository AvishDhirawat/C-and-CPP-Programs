#include<stdio.h>
#include<iostream>
using namespace std;
class Array
{
    int a[5];
public :
    Array()
    {
        cout<<"Enter the Elements : ";
        for(int i=0;i<5;i++)
            cin>>a[i];
    }
    void max(Array ob)
    {
        int temp = ob.a[0];
        for(int i =0;i<5;i++)
        {
            if(temp<ob.a[i])
                {
                    temp = ob.a[i];
                }
        }
        cout <<"Max = "<<temp;
    }
};
int main()
{
    Array ob;
    ob.max(ob);
}
