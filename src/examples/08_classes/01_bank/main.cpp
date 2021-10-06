#include "bank_account.h"
#include "atm.h"
#include<iostream>
#include<time.h>

using std::cout;  using std::cin;

int main()
{
	srand(time(NULL));//generate true random numbers
	ATM atm;
	auto amount = 0;
	auto choice = 0;
	
	do
	{
		cout<<"\nGREAT ACC BANK\n";
		cout<<"1-Get Balance \n";
		cout<<"2-Deposit\n";
		cout<<"3-Withdraw\n";
		cout<<"4-Exit\n";

		cin>>choice;

		switch(choice)
		{
		case mbalance:
			atm.display_balance();
			break;
		case mdeposit:
			cout<<"Enter deposit: \n";
			cin>>amount;
			atm.deposit(amount);
			atm.display_balance();
			cout<<"Deposit complete: \n";
			break;
		case mwithdraw:
			cout<<"Enter withdraw: \n";
			cin>>amount;
			atm.withdraw(amount);
			atm.display_balance();
			cout<<"Withdraw complete\n";
			break;
		default:
			cout<<"Invalid choice\n";
		}
	}
	while(choice != 4);

	return 0;
}

