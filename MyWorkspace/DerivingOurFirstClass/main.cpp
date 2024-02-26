#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

using namespace std;

int main(){

	cout<<"\n====================Account class================="<<endl;
	Account acc{};
	acc.deposit(200.0);
	acc.withdraw(50.0);
	
	cout<<endl;
	
	Account *p_acc{nullptr};
	p_acc = new Account();
	p_acc->deposit(2000.0);
	p_acc->withdraw(500.0);
	delete p_acc;
	
	cout<<"\n=======Savings_Account class=============="<<endl;
	Savings_Account sav_acc{};
	Savings_Account *p_sav_acc{nullptr};
	
	sav_acc.deposit(6000.0);
	sav_acc.withdraw(700.0);
	
	p_sav_acc = new Savings_Account();
	p_sav_acc->deposit(3000.0);
	p_sav_acc->withdraw(650.0);
	delete p_sav_acc;
	
	
	return 0;
}