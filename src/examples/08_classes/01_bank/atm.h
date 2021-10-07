//atm.h
#include "bank_account.h"
#include <vector>

#ifndef ATM_H
#define ATM_H

enum menu_choices{mbalance=1, mdeposit=2, mwithdraw=3, mexit=4};//int based
enum class ATM_menu {balance=1, deposit=2, withdraw=3, exit=4};//not int based

class ATM
{
public:
    ATM();//executes once when a variable/object of AtM is created
    void scan_card();
    void display_balance();
    void deposit(int amount);
    void withdraw(int amount);

private:
    std::vector<Account> accounts;//composition
    int customer_index;    
};

#endif