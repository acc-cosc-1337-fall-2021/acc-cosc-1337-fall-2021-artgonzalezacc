#include "bank_account.h"
#include "atm.h"
#include<iostream>
#include<time.h>
#include<vector>

using std::cout;  using std::cin;  using std::vector;

int main()
{
	srand(time(NULL));//generate true random numbers

	ATM atm;
	auto amount = 0;
	auto choice = 0;
	auto exit = 'n';

	do
	{
		atm.scan_card();//to select a customer behind the scenes

		do
		{

			cout<<"\nGREAT ACC BANK\n";
			cout<<"1-Get Balance \n";
			cout<<"2-Deposit\n";
			cout<<"3-Withdraw\n";
			cout<<"4-Exit\n";

			cin>>choice;

			switch(static_cast<ATM_menu>(choice))
			{
			case ATM_menu::balance:
				atm.display_balance();
				break;
			case ATM_menu::deposit:
				cout<<"Enter deposit: \n";
				cin>>amount;
				atm.deposit(amount);
				atm.display_balance();
				cout<<"Deposit complete: \n";
				break;
			case ATM_menu::withdraw:
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

		cout<<"Type y to exit\n";
		cin>>exit;

	}
	while(exit != 'y');

	return 0;
}

