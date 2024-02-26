#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_
#include "Account.h"

class Checking_Account: public Account{
	//friend operator<<
	friend std::ostream& operator<<(std::ostream &os, const Checking_Account &account);	
	//add const double fee $1.50
protected:
	const double fee {1.50};
	//overloaded withdeaw

public:
	//constructor
	Checking_Account(std::string name, double balance);
	bool withdraw(double amount);
};

#endif