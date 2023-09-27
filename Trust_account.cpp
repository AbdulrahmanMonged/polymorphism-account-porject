#include "Trust_account.h"

std::ostream &operator<<(std::ostream &os, const Trust_account &acc) {
    os << "Acount name: " << acc.name << ", Current Balance: " << acc.balance << ", Current Interest rate: " << acc.interest_rate  << ", Current Bonus: " << acc.bonus << ", Current attempts left for withdrawals: " << acc.withdrawals_attempts << ", Withdrawals amount percentage: " << acc.withdrawals_amount_percentage; 
    return os;

}

Trust_account::Trust_account(std::string name, double balance, double interest_rate) 
 : Saving_account(name, balance, interest_rate), bonus{default_bonus}, withdrawals_attempts{maximum_withdrawals_attempts}, withdrawals_amount_percentage{maximum_withdrawals_amount_percentage} {}

bool Trust_account::withdraw(double amount) {
    if(withdrawals_attempts == 0 || amount > (balance*(withdrawals_amount_percentage/100))) {
        return false;
    }
    --withdrawals_attempts;
    return Saving_account::withdraw(amount);
}

bool Trust_account::deposit(double amount) {
    if(amount >= 5000.0) {
        amount += bonus;
    }
    return Saving_account::deposit(amount);

}
