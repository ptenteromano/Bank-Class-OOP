//Philip Tenteromano 5/15/2017
//CS2000 FINAL

#include <iostream>
#include "SavingsAccount.h"
using namespace std;

SavingsAccount::SavingsAccount(double bal, double pct)
                    : Account(bal)
{
    if(pct > 0)
        rate = pct;
    else {
        cout<<"Interest rate less than zero, 0% rate applied.\n";
        rate = 0.0;
    }
}

void SavingsAccount::addInterest()
{
    balance += (balance * rate);
}

void SavingsAccount::display()
{
    cout<<"Savings account: "<<number<<", balance = $"<<balance
        <<", interest rate = %"<<(rate*100)<<endl;
}


