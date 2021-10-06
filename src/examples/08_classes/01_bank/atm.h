//atm.h
#include "bank_account.h"

#ifndef ATM_H
#define ATM_H

enum menu_choices{mbalance=1, mdeposit=2, mwithdraw=3, mexit=4};
enum class ATM_menu {balance=1, deposit=2, withdraw=3, exit=4};

class ATM
{
public:
    void display_balance();
    void deposit(int amount);
    void withdraw(int amount);

private:
    Account account;//composition    
};

#endif