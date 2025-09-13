//Write a C++ program that accepts user input for their name and age and then
//displays a personalized greeting.
#include<iostream>      //PREPROCESSOR DIRECTIVE
using namespace std;
int main()              //EXECUTION STARTS
{
    string name;        //local variable
    int age;
    cout<<"Enter your name";
    cin>>name;          //Take input from user
    cout<<"Enter your age ";
    cin>>age;
    cout<<"Your name is "<<name<<endl;
    cout<<"Your age is "<<age;

}