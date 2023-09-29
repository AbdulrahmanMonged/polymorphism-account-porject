#ifndef __ACCOUT_H__
#define __ACCOUT_H__

#include <string>
#include "Printable.h"


class Account : public Printable {
private:

    static constexpr char *default_name = "Unnamed Account";
    static constexpr double default_balance = 0.0;

protected:

    std::string name;
    double balance;

public:
    void print(std::ostream &os) const {};
    Account(std::string name = default_name,double balance = default_balance);
    virtual bool deposit(double amount) = 0;
    virtual bool withdraw(double amount) = 0;
    virtual ~Account() {}
};


#endif // __ACCOUT_H__
