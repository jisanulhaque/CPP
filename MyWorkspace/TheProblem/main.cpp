#include <iostream>

using namespace std;

class Base{
public:	
	void say_hello() const{
		cout<<"Hello-I am a Base Class"<<endl;
	}
};

class Derived: public Base{
public:
	void say_hello() const{
		cout<<"Hello- I ma a derived class"<<endl;
	}
};

void greetings(const Base &obj){
	cout<<"Greetings: ";
	obj.say_hello();
	cout<<endl;
}

int main(){
	
	Base b;
	greetings(b);
	
	Derived c;
	greetings(c);
	
	Base *ptr = new Derived;
	ptr->say_hello();
	
	
	
	return 0;
}