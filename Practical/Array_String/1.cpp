//Write a C++ program that accepts an array of integers, calculates the sum and
//average, and displays the results.
#include<iostream>
using namespace std;
int main()
{
    int size,sum,avg;
    avg=0;
    sum=0;
    cout<<"ENTER SIZE OF ARRAY::";
    cin>>size;
    int a[size];
    for(int i=0;i<size;i++)
    {
        cout<<"ENTER ELEMENT::";
        cin>>a[i];
    }
    cout<<endl;
    cout<<"ELEMENTS ARE::";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
    for(int i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    cout<<"SUM OF ALL ELEMENTS ARE "<<sum;
    avg=sum/size;
    cout<<endl;
    cout<<"AVERAGE OF NUMBER IS "<<avg;
    return 0;
}
