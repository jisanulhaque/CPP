#include <iostream>
#include <string>

using namespace std;

class Account{
private:
	//attributes
	string name;
	double balance;
	
	public:
	//methods
	//declared inline
	void set_balance(double bal){balance = bal;}
	double get_balance(){return balance;}
	
	//methods will be declared outside the class declaration
	void set_name(string n);
	string get_name();
	
	bool deposite(double amount);
	bool withdraw(double amount);
};

void Account::set_name(string n){
	name = n;
}

string Account::get_name(){
	return name;
}

bool Account::deposite(double amount){
	//if verify amount
	balance += amount;
	return true;
}

bool Account::withdraw(double amount){
	if(balance-amount>=0){
		balance -= amount;
		return true;
	}else
		return false;
}

int main(){
	Account frank_account;
	frank_account.set_name("Frank's Account");
	frank_account.set_balance(1000);
	
	if(frank_account.deposite(200))
		cout<<"Deposit ok";
	else
		cout<<"Deposite Not Allowed";
		
	if(frank_account.withdraw(500))
		cout<<"Withdrawl successful";
	else
		cout<<"Not sufficient fund";
		
	if(frank_account.withdraw(1500))
		cout<<"Withdrawl ok";
	else
		cout<<"NOt sufficient fund";
	
	return 0;
}