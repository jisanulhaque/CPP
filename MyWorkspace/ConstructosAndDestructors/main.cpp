#include <iostream>

using namespace std;
class Base{
private:
	int value;
public:
	Base():value{0} {cout<<"Base No args constructor"<<endl;}
	Base(int x):value{x} {cout<<"Base overloaded constructor"<<endl;}
	~Base(){cout<<"Base destructor"<<endl;}
};

class Derived:public Base{
	using Base::Base;
private:
	int double_value;
public:
	Derived():double_value{0}{cout<<"Derived NO args constructor"<<endl;}
	Derived(int x):double_value{x}{cout<<"Derived overloaded consturctor"<<endl;}
	~Derived(){cout<<"Derived destructor"<<endl;}
};

int main(){
	
	//Base b;
	//Base b{100};
	Derived d{1000};
	return 0;
}