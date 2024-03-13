#include <iostream>
#include "Account_Util.h"



void display(const std::vector<std::unique_ptr<Account>> &accounts) {
    for (const auto &acc: accounts) 
        std::cout << *acc << std::endl;
}

// Deposits supplied amount to each Account object in the vector
void deposit(std::vector<std::unique_ptr<Account>> &accounts, double amount) {
    for (auto &acc:accounts)  {
        if (acc->deposit(amount)) 
            std::cout << "Deposited " << amount << " to " << *acc << std::endl;
        else
            std::cout << "Failed Deposit of " << amount << " to " << *acc << std::endl;
    }
}

// Withdraw amount from each Account object in the vector
void withdraw(std::vector<std::unique_ptr<Account>> &accounts, double amount) {
    for (auto &acc:accounts)  {
        if (acc->withdraw(amount)) 
            std::cout << "Withdrew " << amount << " from " << *acc << std::endl;
        else
            std::cout << "Failed Withdrawal of " << amount << " from " << *acc << std::endl;
    } 
}