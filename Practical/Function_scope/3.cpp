//Write a program that demonstrates the difference between local and global
//variables in C++. Use functions to show scope
#include<iostream>
using namespace std;
int global_var=10;          //GLOBAL VARIABLE
void display()
{
    int local_var=30;
    cout<<"INSIDE FUNCTION::"<<endl;
    cout<<"Local variable ="<<local_var<<endl;
    cout<<"Global variable = "<<global_var;
}
int main()
{
    int local_var=18;
    cout<<"Local variable ="<<local_var<<endl;
    cout<<"Global variable ="<<global_var<<endl;
    display();
    return 0;
}