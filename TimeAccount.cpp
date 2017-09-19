//Philip Tenteromano 5/15/2017
//CS2000 FINAL

#include <iostream>
#include "TimeAccount.h"
using namespace std;

TimeAccount::TimeAccount(double bal, double pct)
                : SavingsAccount(bal, pct)
{
    funds_available = 0.0;
}

void TimeAccount::addInterest()
{
    funds_available += (balance * rate);

    balance += (balance * rate);
}

void TimeAccount::withdraw(double amt)
{
    if(amt < funds_available && amt > 0){
        Account::withdraw(amt);
        funds_available -= amt;
    }
    else
        cout<<"Withdraw amount exceeds funds available.\n";
}

double TimeAccount::get_funds_available()
{
    return funds_available;
}

void TimeAccount::display()
{
    cout<<"Time account: "<<number<<", balance = $"<<balance
        <<", interest rate = %"<<(rate*100)
        <<", available funds = $"<<funds_available<<endl;
}
