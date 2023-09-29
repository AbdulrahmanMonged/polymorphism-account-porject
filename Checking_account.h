#ifndef __CHECKING_ACCOUNT_H__
#define __CHECKING_ACCOUNT_H__
#include "Account.h"

class Checking_account : public Account {

private:

    static constexpr char *default_name = "Unnamed Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_fees{1.50};

protected:

    double fees;

public:

    void print(std::ostream &os) const override;
    Checking_account(std::string name = default_name , double balance = default_balance);
    bool withdraw(double amount) override;
    bool deposit(double amount) override;
    virtual ~Checking_account() {}
};

#endif // __CHECKING_ACCOUNT_H__
