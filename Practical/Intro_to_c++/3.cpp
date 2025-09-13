//Write two small programs: one using Procedural Programming (POP) to calculate the
//area of a rectangle, and another using Object-Oriented Programming (OOP) with a
//class and object for the same task.
#include<stdio.h>       //preprocessor directive for c programming
#include<iostream>      //preprocessor directive for c++ programming
using namespace std;
int rect(int a,int b)
{
    return a*b;
}
class Rectangle             //object oriented programming class
{
    public:
    int len,breadth;
    Rectangle():len(0),breadth(0){}
    Rectangle(int a,int b)
    {
        len=a;
        breadth=b;
    }
    void display()
    {
        int area;
        area=len*breadth;
        cout<<"Area of rectangle through object oriented programming is "<<area;
    }

};
int main()
{
    Rectangle r1(2,3);
    int length,breadth;
    printf("Enter length::");
    scanf("%d",&length);
    printf("Enter breadth::");
    scanf("%d",&breadth);
    cout<<"Area of rectangle through procedural programming is "<<rect(length,breadth);
    cout<<endl;
    r1.display();
    return 0;
}