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
        bank_balance += amount;
    }
}

void Account::withdraw(int amount)
{
    if(amount > 0 && amount <= balance )
    {
        balance -= amount;
        bank_balance -= amount;
    }
}

void Account::get_begin_balance()
{
    balance = rand() % 10000 + 1;//generates number from 1 to 10000
}
//initialize bank balance
int Account::bank_balance = 0;//

//----------------FREE FUNCTIONS-------------------
void display_account(Account account)
{   //account.deposit(100);
    std::cout<<"Function display account: "<<account.get_balance()<<"\n";
}

void friend_display_balance(const Account& account)
{
    std::cout<<"Friend function display account: "<<account.balance<<"\n";
}

Account get_account()
{
    Account a(1000);
    return a;
}

//BRANCH BANK CLASS functions
BranchBank::BranchBank(int b)
{
    Account::bank_balance += b;
}

void BranchBank::update_balance(int b)
{
    branch_balance += b;
    Account::bank_balance += b;
}