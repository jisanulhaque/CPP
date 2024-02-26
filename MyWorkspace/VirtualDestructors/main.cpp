#include <iostream>
using namespace std;

class Account{
public:
	void withdraw(double amount){
		cout<<"withdraw: in Account"<<endl;
	}
	~Account(){cout<<"Destructor: Account"<<endl;}
};

class Savings: public Account{
public:
	void withdraw(double amount){
		cout<<"withdraw: in Savings"<<endl;
	}
	~Savings(){cout<<"Destructor: Savings"<<endl;}
};

class Checking: public Account{
public:
	void withdraw(double amount){
		cout<<"withdraw: in CHecking"<<endl;
	}
	~Checking(){cout<<"Destructor: Checking"<<endl;}
};

class Trust: public Account{
public:
	void withdraw(double amount){
		cout<<"withdraw: in Trust"<<endl;
	}
	~Trust(){cout<<"Destructor: Trust"<<endl;}
};


int main(){
	
	cout<<"It Works"<<endl;
	cout<<"It may not work"<<endl;
	
	Account* p1 = new Account();
	Account* p2 = new Savings();
	Account* p3 = new Checking();
	Account* p4 = new Trust();

	p1->withdraw(1000);
	p2->withdraw(1000);
	
	cout<<"Hello"<<endl;
	return 0;
}