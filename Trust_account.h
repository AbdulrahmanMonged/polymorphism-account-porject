#ifndef __TRUST_ACCOUNT_H__
#define __TRUST_ACCOUNT_H__

#include "Saving_account.h"

class Trust_account : public Saving_account {

    
private:

    static constexpr char *default_name = "Unnamed Account";
    static constexpr double default_balance = 0.0;
    static constexpr double default_interest{0.0};
    static constexpr double default_bonus{50.00};
    static constexpr int maximum_withdrawals_attempts{3};
    static constexpr double maximum_withdrawals_amount_percentage{20.00};
protected:
    double bonus;
    double withdrawals_amount_percentage;
    int withdrawals_attempts;

public:
    void print(std::ostream &os) const override;
    Trust_account(std::string name = default_name, double balance = default_balance, double interest_rate =  default_interest);
    bool withdraw(double amount) override;
    bool deposit(double amount) override;
    virtual ~Trust_account() {}

};

#endif // __TRUST_ACCOUNT_H__
