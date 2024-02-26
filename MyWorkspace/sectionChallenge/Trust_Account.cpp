#include "Trust_Account.h"

int Trust_Account::no_of_withdrawl = 0;

Trust_Account::Trust_Account(std::string name, double balance, double int_rate)
	:Savings_Account(name, balance, int_rate){
}
	//deposit
	bool Trust_Account::deposit(double amount){
		if(amount>=5000.0)
			amount+=50.0;
		return Savings_Account::deposit(amount);
	}
	//withdraw
	bool Trust_Account::withdraw(double amount){
		if(amount<(balance*0.2) && no_of_withdrawl <=2){
			no_of_withdrawl++;
			balance-=amount;
			return true;
			
		}else 
			return false;
	}
			
std::ostream& operator<<(std::ostream &os, const Trust_Account &object){
	os<<"[Trust Account: "<<object.name<<": "<<object.balance<<" ]"<<std::endl;
	return os;
}
	
	