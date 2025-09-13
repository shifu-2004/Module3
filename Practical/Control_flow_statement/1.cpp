//Grade Calculator
//Write a C++ program that takes a student’s marks as input and calculates the grade
//based on if-else conditions.
#include<iostream>
using namespace std;
int main()
{
    int mark;
    cout<<"ENTER MARKS::";
    cin>>mark;
    if(mark>=90)
    {
        cout<<"YOU ARE DISTINCTION";
    }
    else if(mark>=80)
    {
        cout<<"YOUR GRADE IS A+";
    }
    else if(mark>=70)
    {
        cout<<"YOUR GRADE IS B";
    }
    else if(mark>=50)
    {
        cout<<"YOUR GRADE IS C";
    }
    else if(mark>=35)
    {
        cout<<"YOUR GRADE IS D";
    }
    else{
        cout<<"YOU ARE FAIL..TRY NEXT TIME";
    }
    return 0;
}