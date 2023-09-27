#include "Saving_account.h"

Saving_account::Saving_account(std::string name, double balance, double interest_rate) 
    : Account{name, balance} , interest_rate{interest_rate} {}


bool Saving_account::deposit(double amount) {
    amount += (interest_rate * amount / 100);
    return Account::deposit(amount);
}

std::ostream &operator<<(std::ostream &os, const Saving_account &acc) {
    os << "Account name: " << acc.name << ", Current Balance: " << acc.balance << ", Current Interest: " << acc.interest_rate;
    return os;
}