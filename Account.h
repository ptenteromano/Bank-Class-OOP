//Philip Tenteromano 5/15/2017
//CS2000 FINAL

#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account {
    protected:
        double balance;
        int number;
        static int accountsCreated;
    public:
        Account(double bal);
        virtual Account operator+(double rhs);
        virtual void deposit(double amt);
        virtual void withdraw(double amt);
        double getBalance();
        virtual void display();
};

#endif // ACCOUNT_H



