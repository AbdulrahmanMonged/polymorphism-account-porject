#ifndef __SAVING_ACCOUNT_H__
#define __SAVING_ACCOUNT_H__

#include "Account.h"


class Saving_account : public Account {
    friend std::ostream &operator<<(std::ostream &os, const Saving_account &acc);

private:
    static constexpr char *default_name = "Unnamed Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest{0.0};
protected:
    double interest_rate;

public:
    Saving_account(std::string name = default_name, double balance = default_balance, double interest_rate = default_interest);
    bool deposit(double amount);

};

#endif // __SAVING_ACCOUNT_H__
