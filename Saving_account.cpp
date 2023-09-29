#include "Saving_account.h"

Saving_account::Saving_account(std::string name, double balance, double interest_rate) 
    : Account{name, balance} , interest_rate{interest_rate} {}



bool Saving_account::deposit(double amount) {
    amount += (interest_rate * amount / 100);
    return Account::deposit(amount);
}

bool Saving_account::withdraw(double amount) {
    return Account::withdraw(amount);
}


void Saving_account::print(std::ostream &os) const {
    os << "Account name: " << name << ", Current Balance: " << balance << ", Current Interest: " << interest_rate;

}