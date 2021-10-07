//atm.cpp
#include "atm.h"

using std::cout;

ATM::ATM()
{
   	accounts.push_back(Account());
	accounts.push_back(Account());
	accounts.push_back(Account());
    accounts.push_back(Account());
    accounts.push_back(Account());
}

void ATM::scan_card()
{
    customer_index = rand() % accounts.size();
}

void ATM::display_balance()
{
    Account account = accounts[customer_index];
    cout<<"Balance: "<<account.get_balance()<<"\n";
}

void ATM::deposit(int amount)
{
    Account& account = accounts[customer_index];
    account.deposit(amount);
}

void ATM::withdraw(int amount)
{
    Account& account = accounts[customer_index];
    account.withdraw(amount);
}