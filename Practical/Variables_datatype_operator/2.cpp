//Write a C++ program that performs both implicit and explicit type conversions and
//prints the results.
#include<iostream>
using namespace std;
int main()
{
    int mark=80;
    float new_mark=mark;   //  IMPLICIT CONVERSION DONE AUTOMATICALLY BY COMPILER
    cout<<"MARK IS "<<mark;
    cout<<endl;
    cout<<"IMPLICIT CONVERSION OF MARK IS "<<new_mark;
    cout<<endl;
    double num = 9.78;
    int intNum = (int) num;   //EXPLICITELY CONVERSION DONE  MANUALLY BY USER
    cout<<"NUM VALUE IS "<<intNum;
    return 0;
}