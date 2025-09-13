// Write a C++ program to check if a given string is a palindrome (reads the same
// forwards and backwards).
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string name ;
    cout<<"ENTER STRING::";
    cin>>name;
    string temp=name;
    string str="";
    int len = name.length();        //It will find length of the string
    cout << "LENGTH OF STRING IS " << len;
    cout<<endl;
    int i = len - 1;
    while (i >= 0)
    {
        str=str+name[i];
        i--;
    }
    
    if(temp==str)
    {
        cout<<"PALLINDROME STRING";
    }
    else
    {
        cout<<"NOT A PALLINDROME STRING";
    }
}