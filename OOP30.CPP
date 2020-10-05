#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    char filenm[20];
    char ch[100],name[30],branch[20],rno[20];
    cout<<"Enter File Name : ";
    cin >> filenm;
    fout.open(filenm,ios::out);
    if(!fout)
    {
        cout << "Error Opening File.....!! \n";
        return 0;
    }
        cout << "\nEnter Name of Student : ";
        cin >> name;
        cout << "\nEnter Roll Number : ";
        cin >> rno;
        cout << "\nEnter Branch : ";
        cin >> branch;
        fout << "Name : " << name << "\n"<< "Roll Number : " <<rno << "\n"<< "Branch : " << branch << "\n";
    fout.close();
/* fout.open(filenm,ios::in);
    while(!fout.eof())
    {
        fout>>ch;
        cout << ch << " ";
    }
    cout << "\n";
    fout.close(); */
    return 0;
}
