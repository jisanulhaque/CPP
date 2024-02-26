//Savings_Account header file
#ifndef _SAVINGS_ACCOUNT_H_
#define _SAVINGS_ACCOUNT_H_

#include "Account.h"
//correction needed
class Savings_Account: public Account{
	//freind of ostream
	//constructor
	//deposit and interest rate need to be included
	friend std::ostream& operator<<(std::ostream &os, const Savings_Account &object);// included to print int_rate
private:
	static constexpr const char *def_name = "Unnamed Savings Account"; //ptr to const char
	static constexpr double def_balance = 0.0;
	static constexpr double def_int_rate = 0.0;
protected:
	double int_rate;
public:
	Savings_Account(std::string name=def_name, double balance=def_balance, double int_rate=def_int_rate);
	bool deposit(double amount); // amount += (amount * int_rate); Account::deposit(amount);
	//withdraw inherited from base class
};

#endif //_SAVINGS_ACCOUNT_H_