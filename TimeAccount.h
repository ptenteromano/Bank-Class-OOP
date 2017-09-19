//Philip Tenteromano 5/15/2017
//CS2000 FINAL

#ifndef TIMEACCOUNT_H
#define TIMEACCOUNT_H

#include "SavingsAccount.h"

class TimeAccount : public SavingsAccount {
    protected:
        double funds_available;
    public:
        TimeAccount(double bal, double pct);
        void addInterest();
        void withdraw(double amt);
        double get_funds_available();
        void display();
};


#endif // TIMEACCOUNT_H




