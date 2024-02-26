#include <iostream>

using namespace std;

class Account{
public:
	void withdraw(double amount){
		cout<<"In Account::withdraw "<<endl;
	}
};

class Savings:public Account{
public:
	void withdraw(double amount){
		cout<<"In Savings::withdraw "<<endl;
	}
};

class Checking:public Account{
public:
	void withdraw(double amount){
		cout<<"In Checking::withdraw "<<endl;
	}
};

class Trust:public Account{
public:
	void withdraw(double amount){
		cout<<"In Trust::withdraw "<<endl;
	}
};


int main(){
	cout<<"\n======Pointers==============="<<endl;
	Account *p1=new Account;
	Account *p2=new Savings;
	Account *p3=new Checking;
	Account *p4=new Trust;
	
	p1->withdraw(1000);
	p2->withdraw(1000);
	p3->withdraw(1000);
	p4->withdraw(1000);
	
	cout<<"\n=================Clean Up================"<<endl;
	delete p1;
	delete p2;
	delete p3;
	delete p4;
	
	return 0;
}