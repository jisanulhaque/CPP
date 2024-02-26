
#include "Savings_Account.h"

Savings_Account::Savings_Account(double balance, double int_rate)
	:Account(balance), int_rate{int_rate}{
		
}

Savings_Account::Savings_Account()
	:Savings_Account(0.0, 0.0){
		
}

void Savings_Account::deposit(double amount){
	amount = amount +(amount*int_rate/100);
	Account::deposit(amount);
}
/*
 * if we do not oveload insertion operator here
 * the Base calss insertion operator method will takeover as Savings_Account is an Account
 * But it will slice of the int_rate part and print only balance*/
 
//std::ostream &operator<<(std::ostream &os, const Savings_Account &account){
//	os<<"Savings Account Balance: "<<account.balance<<"Interest Rate: "<<account.int_rate;
//	return os;
//}