#include "Account.h"

Account::Account(std::string name, double balance) 
    : name{name}, balance{balance} {
}

bool Account::deposit(double amount) {//Pure virtual func
    if (amount < 0) 
        return false;
    else {
        balance += amount;
        return true;
    }
    // std::cout<<"Deposit: In Account"<<std::endl;
}

bool Account::withdraw(double amount) {//pure virtual func
//std::cout<<"Withdraw: In Account"<<std::endl;
    if (balance-amount >=0) {
        balance-=amount;
        return true;
    } else
        return false;  
}
