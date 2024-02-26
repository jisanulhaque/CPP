#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include <vector>
#include "Account.h"



void display(const std::vector<Account *> &account);
void deposit(std::vector<Account *>&account, double amount);
void withdraw(std::vector<Account *>&account, double amount);

#endif