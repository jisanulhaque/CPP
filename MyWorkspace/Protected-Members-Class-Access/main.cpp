#include <iostream>

using namespace std;

class Base{
	//Note that friend of Base class gets access to all
public:
	int a{0};
	void display(){cout<<a<<","<<b<<","<<c<<endl;}
protected:
	int b {0};
private:
	int c {0};
};

class Derived: public Base{
	//NOte that friend of Derived object has access to all
	//a will be public
	//b will be protected
	//c will have no access
public:
	void access_member_method(){
		a = 100; //ok
		b = 200;//ok
		//c = 300; //no access
	}
	
	
};

int main(){
	
	cout<<"Base member access from Base object"<<endl;
	Base base;
	base.a = 100;//ok
//	base.b = 200; //compiler error
//	base.c = 300; //compiler error
	
	cout<<"Base member access from derived object"<<endl;
	Derived d;
	d.a=100;//ok
//	d.b=200;//error
//	d.c=300;//error
	
	return 0;
}