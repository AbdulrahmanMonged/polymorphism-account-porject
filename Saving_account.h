#ifndef __SAVING_ACCOUNT_H__
#define __SAVING_ACCOUNT_H__

#include "Account.h"


class Saving_account : public Account {

private:
    static constexpr char *default_name = "Unnamed Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest{0.0};
protected:
    double interest_rate;

public:
    void print(std::ostream &os) const override;
    Saving_account(std::string name = default_name, double balance = default_balance, double interest_rate = default_interest);
    bool withdraw(double amount) override;
    bool deposit(double amount) override;
    virtual ~Saving_account() {}
};

#endif // __SAVING_ACCOUNT_H__
