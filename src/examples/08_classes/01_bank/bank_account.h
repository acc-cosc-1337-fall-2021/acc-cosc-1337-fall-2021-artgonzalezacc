//bank_account.h
class Account
{
public://access specifier
    Account() : Account(0) {}//synthesized default constructor (function)
    Account(int b) : balance(b){/*empty code block*/}//constructor
    int get_balance()const;
    void deposit(int amount);
    void withdraw(int amount);    
    
private:
    int balance;//iniitalize to zero
};

//free function
void display_account(Account account);
Account get_account();