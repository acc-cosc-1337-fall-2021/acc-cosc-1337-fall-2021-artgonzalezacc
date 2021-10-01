#include "bank_account.h"
#include<iostream>

using std::cout;

int main()
{
	Account account;
	Account account2(500);

	cout<<account.get_balance()<<"\n";
	cout<<account2.get_balance()<<"\n";

	account.deposit(50);
	cout<<account.get_balance()<<"\n";

	display_account(account2);
	cout<<account2.get_balance()<<"\n";

	Account account3 = get_account();
	cout<<account3.get_balance()<<"\n";

	return 0;
}

