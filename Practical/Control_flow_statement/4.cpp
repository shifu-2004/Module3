//Write a program that prints a right-angled triangle using stars(*) with a nested loop.
#include<iostream>
using namespace std;
int main()
{
    int i,j;
    for(i=0;i<=5;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }
}