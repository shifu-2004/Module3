//Write a C++ program that demonstrates arithmetic, relational, logical, and bitwise
//operators. Perform operations using each type of operator and display the results.
#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two variables::";
    cin>>a>>b;
    cout<<"<<<<<<ARITHMETIC OPERATIONS>>>>>"<<endl;
    cout<<"Addition is "<<a+b<<endl;
    cout<<"Substraction is "<<a-b<<endl;
    cout<<"Multiplication is "<<a*b<<endl;
    cout<<"Division is "<<a/b<<endl;

    cout<<"<<<<<RELATIONAL OPERATOR>>>>>>>>";
    cout<<endl;
    cout<<"A is greater than b:::print 1 as true or false as 0 ans =  "<<(a>b);
    cout<<endl;
    if(a<b)
    {
        cout<<"a is less than b";
    }
    else if(a==b)
    {
        cout<<"a is equal to b";
    }
    else
    {
        cout<<"a is greater than b";
    }

    cout<<"\n<<<<<<<<<<<<BITWISE OPERATORS>>>>>>>";
    cout<<(a&b);
    int c=30;
    cout<<endl;
    
    cout<<"<<<<<<<<LOGICAL OPERATORS>>>>>>>>";
    cout<<endl;
    if(a>b && a>c)
    {
        cout<<"A is largest number";
    }
    else if(b>a && b>c)
    {
        cout<<"B is largest number";
    }
    else
    {
        cout<<"C is largest number";
    }
    
    return 0;


}