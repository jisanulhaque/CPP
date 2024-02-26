#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_
#include "Savings_Account.h"

class Trust_Account:public Savings_Account{
friend std::ostream& operator<<(std::ostream &os, const Trust_Account &object);
private:
	static int no_of_withdrawl; 

public:
	Trust_Account(std::string name, double balance, double int_rate);//constructor
	//deposit
	bool deposit(double amount);
	//withdraw
	bool withdraw(double amount);
};

#endif