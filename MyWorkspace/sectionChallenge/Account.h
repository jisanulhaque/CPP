
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>

class Account{
	
	friend std::ostream &operator<<(std::ostream &os, const Account &object);
	
private:
	static constexpr const char *def_name = "Unnamed Account";
	static constexpr double def_balance = 0.0;
	
	//protected attr
protected:
	std::string name;
	double balance;
public:
	//Constructor
	Account(std::string name = def_name, double balance = def_balance);//default parameters
	//Account(std::string name ="Unnamed Account", double balance = 0.0)
	bool deposit(double amount);
	bool withdraw(double amount);
	double get_blance() const;
};

#endif //_ACCOUNT_H_