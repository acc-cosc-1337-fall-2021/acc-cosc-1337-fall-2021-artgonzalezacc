//bank_account.h
class Account
{
public:
    Account(int b) : balance(b){}
    int get_balance();    
    
private:
    int balance{0};//iniitalize to zero
};