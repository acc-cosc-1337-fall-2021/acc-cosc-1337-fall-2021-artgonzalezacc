//bank_account.h
#include <stdlib.h>//for rand()
#include <iostream>

//header guards
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public://access specifier
    Account() : Account(0) {get_begin_balance();}//synthesized default constructor (function)
    Account(int b) : balance(b){}//constructor
    int get_balance()const;
    void deposit(int amount);
    void withdraw(int amount);    
    
private:
    int balance;//iniitalize to zero
    void get_begin_balance();  
};

#endif

//free function
void display_account(Account account);
Account get_account();