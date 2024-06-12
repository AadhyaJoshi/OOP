//main driver code which demonstrates the implementation of the banking system

#include<iostream>
#include "classes.cpp"
using namespace std;

int main(){

    SavingAccount s("ACC0153XXXX",500000,50000); //setting max limit of withdrawal as Rs.50000 for savings account
    CheckingAccount c("ACC0276XXXX",60000);

    s.withdraw(60000); //withdrawal of cash more than set limit
    s.withdraw(45000); //valid withdrawal
    s.deposit(100000);

    c.withdraw(4000);
    c.deposit(23000);

    return 0;
}