#include <iostream>

using namespace std;

class Base{
private:
	int value;
public:
	Base():value{0} {cout<<"Base No args constructor"<<endl;} //No-args
	
	Base(int x):value{x} {cout<<"Base overloaded constructor"<<endl;} //Overloaded Constructor
	
	Base(const Base &other)
		:value{other.value}{
		cout<<"Base copy constructor"<<endl;
	}
	
	Base &operator=(const Base &rhs){
		cout<<"Base overloaded operator="<<endl;
		if(this==&rhs)
			return *this;
		value = rhs.value;
		return *this;
	}
	~Base(){cout<<"Base destructor"<<endl;}
};

class Derived:public Base{
	using Base::Base;
private:
	int double_value;
public:
	Derived():double_value{0}{cout<<"Derived NO args constructor"<<endl;}
	Derived(int x):Base(x), double_value{x*2}{cout<<"Derived overloaded consturctor"<<endl;}
	Derived(const Derived &other)
		:Base(other), double_value{other.double_value}{
			cout<<"Derived copy consturctor"<<endl;
	}
	
	Derived &operator=(const Derived &rhs){
		cout<<"Derived overloaded operator="<<endl;
		if(this == &rhs)
			return *this;
		Base::operator=(rhs);
		double_value = rhs.double_value;
		return *this;
	}
	~Derived(){cout<<"Derived destructor"<<endl;}
};

int main(){
	
//	Base b{100}; //overloaded constructor
//	Base b1{b}; //copy constructor
//	b = b1; 	//copy assignment
	
	Derived d{100}; //overloaded construcotr
	Derived d1{d}; //Copy constructor
	d = d1; //Copy Assignment
	
	return 0;
}