//Write a C++ program that demonstrates the use of variables and constants. Create
//variables of different data types and perform operations on them.
#include<iostream>
using namespace std;
const float pi=3.14;       //Constant values are fixed values which we cannot change throughout program
int age=20;                //Global variable which we can access everywhere
int main()
{
    int id=1;           //Varibales values are flexible which changes when we want
    string name="SHIFA";
    float percent=95.60;
    cout<<"DISPLAYS INFO::"<<endl;
    cout<<"MY ID IS "<<id;
    cout<<endl;
    cout<<"MY NAME IS "<<name;
    cout<<endl;
    cout<<"MY PERCENTAGE IS "<<percent;
    cout<<endl;
    cout<<"CONSTANT VALUE OF PIE IS "<<pi;
    cout<<endl;
    cout<<"GLOBAL VARIABLE IS "<<age<<endl;
    age=age+1;
    name="Bagwan";          
    cout<<"UPDATED INFO::"<<endl;
    cout<<"MY NAME IS "<<name<<endl;
    cout<<"MY NEW AGE IS "<<age;
    return 0;
}


