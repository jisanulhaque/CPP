#include <iostream>

using namespace std;
class Base{
	int value;
public:
	Base():value{0}{
		cout<<"Base no-arg constructor"<<endl;
	}
	Base(int x):value{x}{
		cout<<"Int Base constructor"<<endl;
	}
	
	~Base(){
		cout<<"Base destructor"<<endl;
	}
};

class Derived:public Base{
	int doubled_val;
public:
	Derived():Base{},doubled_val{0}{
		cout<<"Derived constructor"<<endl;
	}
	
	Derived(int x):Base{x}, doubled_val{x*2}{
		cout<<"Int Derived constructor"<<endl;
	}
	
	~Derived(){
		cout<<"Derived destructor"<<endl;
	}
};

int main(){
	
	//Derived d;
	Derived d{1000};
	
	return 0;
}