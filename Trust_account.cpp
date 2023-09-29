#include "Trust_account.h"


void Trust_account::print(std::ostream &os) const {
os << "Acount name: " << name << ", Current Balance: " << balance << ", Current Interest rate: " << interest_rate  << ", Current Bonus: " << bonus << ", Current attempts left for withdrawals: " << withdrawals_attempts << ", Withdrawals amount percentage: " << withdrawals_amount_percentage; 
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
