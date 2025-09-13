//Create a class BankAccount with data members like balance and member functions
//like deposit and withdraw. Implement encapsulation by keeping the data members
//private.
#include<iostream>
using namespace std;
class BankAccount
{
    double Balance=2000;       //DATA HIDING AS IT IS PRIVATE MEMBER
    
    public:
    void GetDeposit(double b)
    {
        cout<<"Deposit AMOUNT IN YOUR ACCOUNT IS "<<b<<endl;
        Balance=Balance + b;

    }
    void SetDeposit()
    {
        cout<<"TOTAL AMOUNT IN YOUR ACCOUNT IS "<<Balance<<endl;
    
    }
    double Withdraw_fun(double b)
    {
        cout<<"WITHDRAW AMOUNT IS "<<b<<endl;
        Balance=Balance-b;
        return Balance;
    }
};
int main()
{
    BankAccount b1;
    b1.GetDeposit(5000);
    b1.SetDeposit();
    cout<<"TOTAL AMOUNT AFTER WITHDRAW  IS "<<b1.Withdraw_fun(3000);
    return 0;
}
