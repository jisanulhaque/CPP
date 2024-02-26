#include <iostream> 
#include "Account_Util.h"

//======================Account==========================
void display(const std::vector<Account> &accounts){
	std::cout<<"\n=========Accounts==========="<<std::endl;
	for(const auto &acc:accounts)
		std::cout<<acc<<std::endl;
}

void deposit(std::vector <Account> &accounts, double amount){
	std::cout<<"\n=============deposit to account============="<<std::endl;
	for(auto &acc:accounts){
		if(acc.deposit(amount))
			std::cout<<"Deposited "<<amount<< " to "<<acc<<std::endl;
		else
			std::cout<<"Falid to deposit "<<amount<<" to "<<acc<<std::endl;
	}
}

void withdraw(std::vector<Account> &accounts, double amount){
	std::cout<<"\n===============Withdraw from account======="<<std::endl;
	for(auto &acc:accounts){
		if(acc.withdraw(amount))
			std::cout<<"Withdwal "<<amount<<" from "<<acc<<std::endl;
		else
			std::cout<<"Insufficient funds in "<<acc<<std::endl;
	}
}

//=================Savings_Account==================

void display(const std::vector<Savings_Account> &accounts){
	std::cout<<"\n=========Savings_Accounts==========="<<std::endl;
	for(const auto &acc:accounts)
		std::cout<<acc<<std::endl;
}

void deposit(std::vector<Savings_Account> &accounts, double amount){
	std::cout<<"\n=============deposit to savings account============="<<std::endl;
	for(auto &acc:accounts){
		if(acc.deposit(amount))
			std::cout<<"Deposited "<<amount<< " to "<<acc<<std::endl;
		else
			std::cout<<"Falid to deposit "<<amount<<" to "<<acc<<std::endl;
	}
}

void withdraw(std::vector<Savings_Account> &accounts, double amount){
	std::cout<<"\n===============Withdraw from savings account======="<<std::endl;
	for(auto &acc:accounts){
		if(acc.withdraw(amount))
			std::cout<<"Withdwal "<<amount<<" from "<<acc<<std::endl;
		else
			std::cout<<"Insufficient funds in "<<acc<<std::endl;
	}
}

//======================Checking_Account==========================
void display(const std::vector<Checking_Account> &accounts){
	std::cout<<"\n=========Checking_Accounts==========="<<std::endl;
	for(const auto &acc:accounts)
		std::cout<<acc<<std::endl;
}

void deposit(std::vector<Checking_Account> &accounts, double amount){
	std::cout<<"\n=============deposit to Checking_Account============="<<std::endl;
	for(auto &acc:accounts){
		if(acc.deposit(amount))
			std::cout<<"Deposited "<<amount<< " to "<<acc<<std::endl;
		else
			std::cout<<"Falid to deposit "<<amount<<" to "<<acc<<std::endl;
	}
}

void withdraw(std::vector<Checking_Account> &accounts, double amount){
	std::cout<<"\n===============Withdraw from Checking_Account======="<<std::endl;
	for(auto &acc:accounts){
		if(acc.withdraw(amount))
			std::cout<<"Withdwal "<<amount<<" from "<<acc<<std::endl;
		else
			std::cout<<"Insufficient funds in "<<acc<<std::endl;
	}
}

//=====================Trust_Account======================

void display(const std::vector<Trust_Account> &accounts){
	std::cout<<"\n========Trust_Accounts==========="<<std::endl;
	for(const auto &acc:accounts)
		std::cout<<acc<<std::endl;
}

void deposit(std::vector<Trust_Account> &accounts, double amount){
	std::cout<<"\n=============deposit to Trust_Account============="<<std::endl;
	for(auto &acc:accounts){
		if(acc.deposit(amount))
			std::cout<<"Deposited "<<amount<< " to "<<acc<<std::endl;
		else
			std::cout<<"Falid to deposit "<<amount<<" to "<<acc<<std::endl;
	}
}

void withdraw(std::vector<Trust_Account> &accounts, double amount){
	std::cout<<"\n===============Withdraw from Trust_Account======="<<std::endl;
	for(auto &acc:accounts){
		if(acc.withdraw(amount))
			std::cout<<"Withdwal "<<amount<<" from "<<acc<<std::endl;
		else
			std::cout<<"Insufficient funds in/Transection limit over "<<acc<<std::endl;
	}
}
