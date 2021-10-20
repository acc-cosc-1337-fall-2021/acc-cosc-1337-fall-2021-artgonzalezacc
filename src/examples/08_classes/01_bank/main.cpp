#include "bank_account.h"
#include "checking_account.h"
#include "savings_account.h"
#include "atm.h"
#include<iostream>
#include<time.h>
#include<vector>
#include<string>

using std::cout;  using std::cin;  using std::vector;

int main()
{
	srand(time(NULL));//generate true random numbers
	Account account(50);
	cout<<account.get_balance()<<"\n";//uses get_balance from Account class
	
	Savings savings(50);
	cout<<savings.get_balance()<<"\n";//uses get_balance from SAvings class
	cout<<savings.get_special_balance();

	Account a = savings;//object slicing
	//cout<<a.get_special_balance(); can't use this with a

	/*ATM atm;
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
			cout<<"4-E
			xit\n";

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
	while(exit != 'y');*/

	return 0;
}

