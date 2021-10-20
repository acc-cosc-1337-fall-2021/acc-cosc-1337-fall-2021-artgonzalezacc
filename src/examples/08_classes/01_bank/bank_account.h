//bank_account.h
#include <stdlib.h>//for rand()
#include <iostream>

#ifndef BRANCH_BANK_H//header guards
#define BRANCH_BANK_H

class BranchBank
{
public:
    BranchBank(){}
    BranchBank(int b);
    void update_balance(int b);
    int get_branch_balance()const{return branch_balance;}
private:
    int branch_balance;
};

#endif


//header guards
#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
public://access specifier
    Account() {get_begin_balance();}
    explicit Account(int b) : balance(b){ bank_balance += balance;}//constructor
    int get_balance()const;
    void deposit(int amount);
    void withdraw(int amount);    
    static int get_bank_balance(){return bank_balance;}
    friend void friend_display_balance(const Account& account);//friend FREE FUNCTION!!!!!!!
    friend void BranchBank::update_balance(int b);//FRIEND CLASS
    friend BranchBank::BranchBank(int b);
    friend std::ostream& operator<<(std::ostream& out, const Account& a);
    friend std::istream& operator>>(std::istream& in, Account& a);

protected:
    int balance;//iniitalize to zero

private:
    
    void get_begin_balance();  
    static int bank_balance;
};

#endif

//free function
void display_account(Account account);
Account get_account();