//Philip Tenteromano 5/15/2017
//CS2000 FINAL

#include <iostream>
#include "CheckingAccount.h"
using namespace std;

CheckingAccount::CheckingAccount(double bal, double chg)
                    : Account(bal)
{
    if(chg > 0)
        fee = chg;
    else {
        cout<<"Fee is less than zero - Fee is now set to $0.\n";
        fee = 0.0;
    }
}

void CheckingAccount::deposit(double amt)
{
    Account::deposit(amt);

    if(amt > 0)
        balance -= fee;
}

void CheckingAccount::withdraw(double amt)
{
    Account::withdraw(amt);

    if(amt > 0 && amt <= balance)
        balance -= fee;
}

Account CheckingAccount::operator+(double rhs)
{
    this->deposit(rhs);
    return *this;
}

void CheckingAccount::display()
{
    cout<<"Checking account: "<<number<<", balance = $"<<balance
        <<", transaction fee = $"<<fee<<endl;
}



