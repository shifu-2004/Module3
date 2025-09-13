//Write a C++ program that defines a class Calculator with functions for addition,
//subtraction, multiplication, and division. Create objects to use these functions.
#include<iostream>
using namespace std;
class Calculator
{
    public:
    int add(int a,int b);           //DECLARATION
    int sub(int a,int b);
    int mul(int a,int b);
    int div(int a,int b);
};
int Calculator::add(int a,int b)        //DEFINITION
{
    return a+b;
}

int Calculator::sub(int a,int b)
{
    return a-b;
}

int Calculator::mul(int a,int b)
{
    return a*b;
}

int Calculator::div(int a,int b)
{
    return a/b;
}
int main()
{
    Calculator c1;
    cout<<"ADDITION IS "<<c1.add(10,20)<<endl;
    cout<<"SUBSTRACTION IS "<<c1.sub(10,20)<<endl;
    cout<<"MULTIPLICATION IS "<<c1.mul(10,20)<<endl;
    cout<<"DIVISION IS "<<c1.div(30,10);

}