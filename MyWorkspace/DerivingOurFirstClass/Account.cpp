#include <iostream>
#include"Account.h"

void Account::deposit(double ammount){
	std::cout<<"Account method is called with "<<ammount<<" BDT."<<std::endl;
}

void Account::withdraw(double ammount){
	std::cout<<"Account method is called with "<<ammount<<" BDT."<<std::endl;
}

Account::Account()
	:balance{0.0}, name{"None"}{
	
}

Account::~Account(){
	
}