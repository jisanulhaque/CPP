#ifndef _ACCOUNT_UTIL_H_
#define _ACCOUNT_UTIL_H_
#include <vector>
#include "Account.h"
#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"

//Utility func for Account class
void display(const std::vector<Account> &accounts);//to display account
void deposit(std::vector<Account> &accounts, double amount);//to deposit amount to all acoounts
void withdraw(std::vector<Account> &accounts, double amount);//to withdraw amount from all acounts

//Utility func for Savings_Account class
void display(const std::vector<Savings_Account> &accounts);
void deposit(std::vector<Savings_Account> &accounts, double amount); //same as above
void withdraw(std::vector<Savings_Account> &accounts, double amount);

//Utility func for Checking_Account
void display(const std::vector<Checking_Account> &accounts);//to display account
void deposit(std::vector<Checking_Account> &accounts, double amount);//to deposit amount to all acoounts
void withdraw(std::vector<Checking_Account> &accounts, double amount);//to withdraw amount from all acounts

//Utility for Trust_Account
void display(const std::vector<Trust_Account> &accounts);
void deposit(std::vector<Trust_Account> &accounts, double amount);
void withdraw(std::vector<Trust_Account> &accounts, double amount);

#endif //_ACCOUNT_UTIL_H_