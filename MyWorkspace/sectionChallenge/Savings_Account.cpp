#include "Savings_Account.h"

//constructor
Savings_Account::Savings_Account(std::string name, double balance, double int_rate)
	:Account(name, balance), int_rate{int_rate}{
}

//modified deposite method
bool Savings_Account::deposit(double amount){
	amount += amount*(int_rate/100);
	return Account::deposit(amount);
}

//ostream op
std::ostream& operator<<(std::ostream &os, const Savings_Account &object){
	os<<"[Savings Account: "<<object.name<<" : "<<object.balance<<", "<<object.int_rate<<"% ]"<<std::endl;
	return os;
}