//Write a C++ program to perform matrix addition on two 2x2 matrices.
#include<iostream>
using namespace std;
int row=2;
int col=2;
int main()
{
    int a[row][col];
    int b[row][col];
    int c[row][col];
    int i,j;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"ENTER ELEMENT::";
            cin>>a[i][j];
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<"ENTER ELEMENT::";
            cin>>b[i][j];
        }
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            c[i][j]=a[i][j]+b[i][j];
        }
    }
    cout<<"ADDITION OF TWO MATRIX IS "<<endl;
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}