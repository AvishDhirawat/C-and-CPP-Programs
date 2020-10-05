#include<iostream.h>
int main()
{
    ofstream myfile;
    myfile.open("ABC.txt");
    myfile<<"Writing this to File\n";
    myfile.close;
    return 0;
}
