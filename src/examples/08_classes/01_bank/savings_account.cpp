//savings_account.cpp
#include "savings_account.h"

int Savings::get_balance()const
{
    return Account::get_balance() + 10;
}