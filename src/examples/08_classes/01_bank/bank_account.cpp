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

void Account::get_begin_balance()
{
    balance = rand() % 10000 + 1;//generates number from 1 to 10000
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