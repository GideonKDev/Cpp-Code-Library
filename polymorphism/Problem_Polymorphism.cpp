/*
in a given bank, customers are allowed to open two types of bank accounts
1. Current account
2. Savings account

to open any of the accounts, the client is required to have ID number, name
and opening deposits

an Account is given an account number...
in both accounts, the client should be able to check their existing balance
and should also be able to make deposits.

for savings account, the client can only withdraw a maximum of what exists in their account
for current account, a client can make an over-draft. The overdraft of each client is set by the bank
and may be varying from time to time.

use the scenario to model and code a program that can be used by the bank
*/

#include<iostream>
#include<string>

using namespace std;

class Account{
protected:
    int ID;
    string name;
    double balance;
    int AccountNo;

public:
    Account();
    void checkBalance();
    void Deposit();
    virtual void withdraw() = 0;
};

class SavingsAccount: public Account{
public:
    SavingsAccount();
    void withdraw();
};

class CurrentAccount: public Account{
public:
    CurrentAccount();
    void withdraw();
};


int main(){

}
