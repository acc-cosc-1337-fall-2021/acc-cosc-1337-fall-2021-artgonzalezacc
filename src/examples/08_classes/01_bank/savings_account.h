//savings_account.h
#include "bank_account.h"

#ifndef SAVINGS_ACCOUNT_H
#define SAVINGS_ACCOUNT_H

class Savings : public Account
{
public:
    Savings(){}
    Savings(int b) : Account(b){/*empty code block*/}
    int get_balance()const;
    int get_special_balance()const{return 1000;}

};

#endif