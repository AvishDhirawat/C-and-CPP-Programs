#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    char myfile[50];
    char rec[100];
    cout<<"Enter File Name :";
    cin>>myfile;
    fout.open(myfile,ios::out);
    cout<<"\nEnter Data :";
    cin>>rec;
    fout<<"Writing this to File\n";
    fout<<rec;
    fout.close();
    return 0;
}
