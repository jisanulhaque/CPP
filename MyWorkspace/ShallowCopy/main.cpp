#include <iostream>
#include <string>

using namespace std;

class Shallow{
private:
	int *data;
public:
void set_data(int d){*data = d;}
int get_data_value(){return *data;}
//Constructor
Shallow(int d);
//Copy Constructor
Shallow(const Shallow &source);
//Destrctor
~Shallow();

};

Shallow::Shallow(int d){
	data = new int;
	*data = d;
}

Shallow::Shallow(const Shallow &source)
	:data(source.data) {
	cout<<"Copy Constructor-Shallow Copy"<<endl;
}
Shallow::~Shallow(){
	delete data;
	cout<<"Desconstructor freeing data"<<endl;
}

void display_shallow(Shallow s){
	cout<<s.get_data_value()<<endl;
}
int main(){
	Shallow obj1{100};
	display_shallow(obj1);
	
	Shallow obj2{obj1};
	obj2.set_data(1000);
	
	
	return 0;
}