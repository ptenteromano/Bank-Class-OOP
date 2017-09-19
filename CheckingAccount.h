//Philip Tenteromano 5/15/2017
//CS2000 FINAL

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Account.h"

class CheckingAccount : public Account {
    protected:
        double fee;
    public:
        CheckingAccount(double bal, double chg);
        Account operator+(double rhs);
        void deposit(double amt);
        void withdraw(double amt);
        void display();
};


#endif // CHECKINGACCOUNT_H




