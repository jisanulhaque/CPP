#include <iostream>
#include "Account.h"

using namespace std;

int main(){
	
	Account frank_account;
	frank_account.set_name("Frank's Account");
	frank_account.set_balance(1000);
	
	if(frank_account.deposite(200))
		cout<<"Deposit ok"<<endl;
	else
		cout<<"Deposite Not Allowed"<<endl;
		
	if(frank_account.withdraw(500))
		cout<<"Withdrawl successful"<<endl;
	else
		cout<<"Not sufficient fund"<<endl;
		
	if(frank_account.withdraw(1500))
		cout<<"Withdrawl ok"<<endl;
	else
		cout<<"NOt sufficient fund"<<endl;
	
	return 0;
}