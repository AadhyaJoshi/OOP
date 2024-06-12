//contains definition of classes

#include<iostream>
using namespace std;

class BankAccount{
    public:
    string number;
    float balance;
    //pure virtual fns
    virtual void deposit(float)=0;
    virtual void withdraw(float)=0;

};

class SavingAccount: public BankAccount{
    private:
    float limit;

    public:
    SavingAccount(string n, float b,float l);
    void deposit(float cash);
    void withdraw(float cash);
};

class CheckingAccount: public BankAccount{
    public:
    CheckingAccount(string n,float b);
    void deposit(float cash);
    void withdraw(float cash);
};
