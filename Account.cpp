//Philip Tenteromano 5/15/2017
//CS2000 FINAL

#include <iostream>
#include "Account.h"
using namespace std;

Account::Account(double bal)
{
    if(bal > 0)
       balance = bal;
    else{
        balance = 0.0;
        cout<<"Negative balance input - balance set to $0.\n";
    }

    accountsCreated++;
    number = accountsCreated;
}

void Account::deposit(double amt)
{
    if(amt > 0)
        balance += amt;
    else
        cout<<"Must deposit positive amount.\n";
}

void Account::withdraw(double amt)
{
    if(amt > 0) {
        if(amt < balance)
            balance -= amt;
        else
            cout<<"Withdraw amount exceeds account balance.\n";
    }
    else
        cout<<"Cannot withdraw negative number.\n";
}

double Account::getBalance()
{
    return balance;
}

Account Account::operator+(double rhs)
{
    this->deposit(rhs);
    return *this;
}

void Account::display()
{
    cout<<"Regular account: "<<number<<", balance = $"<<balance<<endl;
}

