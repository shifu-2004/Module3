//Write a C++ program that asks the user to guess a number between 1 and 100. The
//program should provide hints if the guess is too high or too low. 
#include<iostream>
using namespace std;
int main()
{
    int guess;
    const int secret_no=22;
    start:
    cout<<"\nENTER YOUR GUESS::";
    cin>>guess;
    if(guess>22)
    {
        cout<<"TOO HIGH";
        goto start;

    }
    else if(guess<22)
    {
        cout<<"TOO LOW";
        goto start;
    }
    else
    {
        cout<<"CONGRATULATIONS.YOU GUESSED IT";
    }
    return 0;
}