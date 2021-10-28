//atm.cpp
#include "atm.h"

using std::cout;

ATM::ATM()
{
   	accounts.push_back(std::move(make_unique<Checking>()));
	accounts.push_back(std::move(make_unique<Savings>()));
	accounts.push_back(std::move(make_unique<Savings>()));
    accounts.push_back(std::move(make_unique<Checking>()));
    accounts.push_back(std::move(make_unique<Savings>()));
}

void ATM::scan_card()
{
    customer_index = rand() % accounts.size();
}

void ATM::display_balance()
{
    auto& account = accounts[customer_index];
    cout<<"Balance: "<<account->get_balance()<<"\n";
}

void ATM::deposit(int amount)
{
    auto& account = accounts[customer_index];
    account->deposit(amount);
}

void ATM::withdraw(int amount)
{
    auto& account = accounts[customer_index];
    account->withdraw(amount);
}