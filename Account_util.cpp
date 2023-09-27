#include "Account_util.h"
#include "Checking_account.h"
#include "Trust_account.h"
#include <string>


void super(char *s) {
    std::cout << "\n==== " << s << " ========================" << std::endl ;

}


void display(const std::vector<Saving_account> &v) {
    super("Display");
    for(auto &acc: v) {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<Saving_account> &v, double amount) {
    super("Deposit");
    for(auto &acc: v) {
        if(acc.deposit(amount)) {
            std::cout << "The deposit is successful for: " << acc << std::endl;
        } else {
            std::cout << "The deposit is failed for: " << acc << std::endl;
        }
    }
}

void withdraw(std::vector<Saving_account> &v, double amount) {
    super("Withdraw");
    for(auto &acc: v) {
        if(acc.withdraw(amount)) {
            std::cout << "The withdraw is successful for: " << acc << std::endl;
        } else {
            std::cout << "The withdraw is failed for: " << acc << std::endl;
        }
    }

}


void display(const std::vector<Account> &v) {
    super("Display");
    for(auto &acc: v) {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<Account> &v, double amount) {
    super("Deposit");
    for(auto &acc: v) {
        if(acc.deposit(amount)) {
            std::cout << "The deposit is successful for: " << acc << std::endl;
        } else {
            std::cout << "The deposit is failed for: " << acc << std::endl;
        }
    }
}

void withdraw(std::vector<Account> &v, double amount) {
    super("Withdraw");
    for(auto &acc: v) {
        if(acc.withdraw(amount)) {
            std::cout << "The withdraw is successful for: " << acc << std::endl;
        } else {
            std::cout << "The withdraw is failed for: " << acc << std::endl;
        }
    }

}

void display(const std::vector<Checking_account> &v) {
    super("Display");
    for(auto &acc: v) {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<Checking_account> &v, double amount) {
    super("Deposit");
    for(auto &acc: v) {
        if(acc.deposit(amount)) {
            std::cout << "The deposit is successful for: " << acc << std::endl;
        } else {
            std::cout << "The deposit is failed for: " << acc << std::endl;
        }
    }
}

void withdraw(std::vector<Checking_account> &v, double amount) {
    super("Withdraw");
    for(auto &acc: v) {
        if(acc.withdraw(amount)) {
            std::cout << "The withdraw is successful for: " << acc << std::endl;
        } else {
            std::cout << "The withdraw is failed for: " << acc << std::endl;
        }
    }

}

void display(const std::vector<Trust_account> &v) {
    super("Display");
    for(auto &acc: v) {
        std::cout << acc << std::endl;
    }
}

void deposit(std::vector<Trust_account> &v, double amount) {
    super("Deposit");
    for(auto &acc: v) {
        if(acc.deposit(amount)) {
            std::cout << "The deposit is successful for: " << acc << std::endl;
        } else {
            std::cout << "The deposit is failed for: " << acc << std::endl;
        }
    }
}

void withdraw(std::vector<Trust_account> &v, double amount) {
    super("Withdraw");
    for(auto &acc: v) {
        if(acc.withdraw(amount)) {
            std::cout << "The withdraw is successful for: " << acc << std::endl;
        } else {
            std::cout << "The withdraw is failed for: " << acc << std::endl;
        }
    }

}

