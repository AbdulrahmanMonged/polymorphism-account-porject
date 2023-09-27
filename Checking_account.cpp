#include "Checking_account.h"

std::ostream &operator<<(std::ostream &os, const Checking_account &acc) {
    os << "Account name: " << acc.name << ", Current Balance: " << acc.balance << ", Current Fees: " << acc.fees;
    return os;
}

Checking_account::Checking_account(std::string name, double balance) 
: Account{name, balance} , fees{default_fees} {}

bool Checking_account::withdraw(double amount) {
    amount += fees;
    return Account::withdraw(amount);
}