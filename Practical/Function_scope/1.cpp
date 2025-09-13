//Write a C++ program that defines functions for basic arithmetic operations (add,
//subtract, multiply, divide). The main function should call these based on user input.
#include<iostream>
using namespace std;
int add(int a,int b)
{
    return a+b;
}
int sub(int a,int b)
{
    return a-b;
}
int mul(int a,int b)
{
    return a*b;
}
int division(int a,int b)
{
    return a/b;
}
int main()
{
    int a,b;
    cout<<"ENTER TWO VALUES::";
    cin>>a>>b;
    cout<<"ADDITION IS "<<add(a,b)<<endl;
    cout<<"SUBSTRACTION IS "<<sub(a,b)<<endl;
    cout<<"MULTIPLICATION IS "<<mul(a,b)<<endl;
    cout<<"DIVISION IS "<<division(a,b);
    return 0;
}