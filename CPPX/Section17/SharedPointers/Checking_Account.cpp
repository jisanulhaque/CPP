#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string name, double balance)
    : Account {name, balance} {
}

bool Checking_Account::withdraw(double amount)  {
    //std::cout<<"Withdraw: in Checking_Account"<<std::endl;
    amount += per_check_fee;
    return Account::withdraw(amount);
    
}

bool Checking_Account::deposit(double amount) {
    //std::cout<<"Deposit in Chekcing_Account"<<std::endl;
    return Account::deposit(amount);
}

void Checking_Account::print(std::ostream &os)const{
    os<<"Checking Account: "<<name<<": "<<balance;
}

