//Write a C++ program that calculates the factorial of a number using recursion.
//Recursion means function calling itself directly or indirectly until certain conditions met
#include<iostream>
using namespace std;
int fact(int n)
{
    if(n==0 || n==1)
    return 1;
    else 
    return n*fact(n-1);
}
int main()
{
   int num;
   cout<<"ENTER NUMBER::";
   cin>>num;
   cout<<"FACTORIAL OF NUMBER USING RECURSION  "<<fact(num);

}