//bank_account.cpp
#include<iostream>


#include "bank_account.h"

int Account::get_balance() const
{
    return balance;
}

void Account::deposit(int amount)
{
    if(amount > 0)
    {
        balance += amount;
    }
}

void Account::withdraw(int amount)
{
    if(amount > 0 && amount <= balance )
    {
        balance -= amount;
    }
}

//----------------FREE FUNCTIONS-------------------
void display_account(Account account)
{
    account.deposit(100);
    std::cout<<"Function display account: "<<account.get_balance()<<"\n";
}

Account get_account()
{
    Account a(1000);
    return a;
}