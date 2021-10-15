//bank_account.cpp


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

std::ostream& operator<<(std::ostream& out, const Account& a)
{
    out<<"Overload Display account: Balance is: "<<a.balance<<"\n";

    return out;
}

std::istream& operator>>(std::istream& in, Account& a)
{
    int amount = 0;
    std::cout<<"Enter a number: ";
    in>>amount;

    a.deposit(amount);

    return in;
}

Account get_account()
{
    Account a;
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