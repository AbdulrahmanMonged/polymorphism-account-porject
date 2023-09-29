#ifndef __ACCOUNT_UTIL_H__
#define __ACCOUNT_UTIL_H__
#include "Saving_account.h"
#include "Checking_account.h"
#include "Trust_account.h"
#include <vector>
// ACCOUNT CLASS

void display(const std::vector<Account *> &v);
void deposit(std::vector<Account *> &v, double balance);
void withdraw(std::vector<Account *> &v, double balance);

void print_line(char *s);

#endif // __ACCOUNT_UTIL_H__
