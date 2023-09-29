#include "Account_util.h"
#include "Checking_account.h"
#include "Trust_account.h"
#include <string>


void print_line(char *s) {
    std::cout << "\n======= " << s << " =============================\n" << std::endl ;

}



void display(const std::vector<Account *> &v) {
    print_line("Display");
    for(auto &acc: v) {
        std::cout << *acc << std::endl << std::endl;
    }
}

void deposit(std::vector<Account *> &v, double amount) {
    print_line("Deposit");
    for(auto &acc: v) {
        if(acc->deposit(amount)) {
            std::cout << "The deposit IS SUCCESSFUL for: " << *acc << std::endl << std::endl;
        } else {
            std::cout << "The deposit IS FAILD for: " << *acc << std::endl << std::endl;
        }
    }
}

void withdraw(std::vector<Account *> &v, double amount) {
    print_line("Withdraw");
    for(auto &acc: v) {
        if(acc->withdraw(amount)) {
            std::cout << "The withdraw IS SUCCESSFUL for: " << *acc << std::endl << std::endl;
        } else {
            std::cout << "The withdraw IS FAILD for: " << *acc << std::endl << std::endl;
        }
    }
}
