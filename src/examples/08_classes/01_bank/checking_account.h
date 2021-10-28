//checking_account.h
#include "bank_account.h"

#ifndef CHECKING_ACCOUNT_H
#define CHECKING_ACCOUNT_H

class Checking : public Account
{
public:
    Checking(){}
    Checking(int b) : Account(b) {}
    int get_balance()const override;
    
};

#endif