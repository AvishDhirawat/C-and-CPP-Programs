#include<iostream>
#include<fstream>
using  namespace std;
int main()
{
    ifstream fin("ABC.txt");
    char ch;
    int i,a=0,s=0,d=0;
    while(fin)
    {
        fin.get(ch);
        i=ch;
        if((i>63&&i<91)||(i>96&&i<123))
            a++;
        else
            if(ch==' ')
                s++;
        else
            if(i>47&&i<58)
                d++;
    }
    cout << "\nAlphabets in File : " << a;
    cout << "\nDigits in File : " << d;
    cout << "\nSpaces in File : "<< s;
    return 0;
}
