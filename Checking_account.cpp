#include "Checking_account.h"


    
 
Checking_account::Checking_account(std::string name, double balance) 
: Account{name, balance} , fees{default_fees} {}

bool Checking_account::withdraw(double amount) {
    amount += fees;
    return Account::withdraw(amount);
}

bool Checking_account::deposit(double amount) {
    return Account::deposit(amount);
}

void Checking_account::print(std::ostream &os) const {
    os << "Account name: " << name << ", Current Balance: " << balance << ", Current Fees: " << fees;
}