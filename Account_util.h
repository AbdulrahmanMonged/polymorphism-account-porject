#ifndef __ACCOUNT_UTIL_H__
#define __ACCOUNT_UTIL_H__
#include "Saving_account.h"
#include "Checking_account.h"
#include "Trust_account.h"
#include <vector>
// ACCOUNT CLASS

void display(const std::vector<Account> &v);
void deposit(std::vector<Account> &v, double balance);
void withdraw(std::vector<Account> &v, double balance);

//SAVING ACCOUNT

void display(const std::vector<Saving_account> &v);
void deposit(std::vector<Saving_account> &v, double balance);
void withdraw(std::vector<Saving_account> &v, double balance);

//Checking Account

void display(const std::vector<Checking_account> &v);
void deposit(std::vector<Checking_account> &v, double balance);
void withdraw(std::vector<Checking_account> &v, double balance);

//Trust Account

void display(const std::vector<Trust_account> &v);
void deposit(std::vector<Trust_account> &v, double balance);
void withdraw(std::vector<Trust_account> &v, double balance);
#endif // __ACCOUNT_UTIL_H__
