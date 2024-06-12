//implementation of methods of various classes

#include "classes.h"
#include<iostream>
using namespace std;

SavingAccount::SavingAccount(string n, float b,float l)
{
    number=n;
    (b>0) ? balance=b : 0;
    (l<200000) ? limit=l : 200000;
}

void SavingAccount::deposit(float cash)
{
    if(cash>0){
        balance+=cash;
        cout<<"Transaction successful in Savings Account No."<<number<<endl;
    }  
    else 
    cout<<"Transaction failed! Please try later."<<endl;

    cout<<"Your current balance is Rs. "<<balance<<endl;
}

void SavingAccount::withdraw(float cash)
{
    if(cash>0 && cash<=balance && cash<=limit){
        balance-=cash;
        cout<<"Transaction successful in Savings Account No."<<number<<endl;
    }

    else 
    cout<<"Transaction failed! Please try later."<<endl;

    cout<<"Your current balance is Rs. "<<balance<<endl;
}

CheckingAccount::CheckingAccount(string n,float b)
{
    number=n;
    (b>0) ? balance=b : 0;
}

void CheckingAccount::deposit(float cash)
{
    if(cash>0){
        balance+=cash;
        cout<<"Transaction successful in Checking Account No."<<number<<endl;
    }  
    else 
    cout<<"Transaction failed! Please try later."<<endl;;

    cout<<"Your current balance is Rs. "<<balance<<endl;
}

void CheckingAccount::withdraw(float cash)
{
    if(cash>0 && cash<=balance){
        balance-=cash;
        cout<<"Transaction successful in Checking Account No."<<number<<endl;
    }

    else 
    cout<<"Transaction failed! Please try later."<<endl;

    cout<<"Your current balance is Rs. "<<balance<<endl;
}

