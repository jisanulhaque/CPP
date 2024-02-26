#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_
#include "Account.h" //otherwise compiler wouldn't know 

class Savings_Account: public Account{
public:
	double int_rate;
	Savings_Account();
	~Savings_Account();
	void deposit(double ammount);
	void withdraw(double ammount);
};

#endif //_SAVINGS_ACCOUNT_H_