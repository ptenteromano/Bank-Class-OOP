//Philip Tenteromano 5/15/2017
//CS2000 FINAL

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Account.h"

class SavingsAccount : public Account {
    protected:
        double rate;
    public:
        SavingsAccount(double bal, double pct);
        virtual void addInterest();
        virtual void display();
};


#endif // SAVINGSACCOUNT_H


