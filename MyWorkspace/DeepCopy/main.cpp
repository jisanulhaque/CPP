#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Deep{
private:
	int *data;
public:
void set_data(int d){*data = d;}
int get_data_value(){return *data;}
//Constructor
Deep(int d);
//Copy Constructor
Deep(const Deep &source);
//Destrctor
~Deep();

};

Deep::Deep(int d){
	data = new int;
	*data = d;
}

Deep::Deep(const Deep &source)
	:Deep(*source.data) {
	cout<<"Copy Constructor-Deep Copy for- "<<*data<<endl;
}
Deep::~Deep(){
	cout<<"Desconstructor freeing data for-"<<*data<<endl;
	delete data;
	
}

void display_deep(Deep s){
	cout<<s.get_data_value()<<endl;
}
int main(){
//	Deep obj1{100};
//	display_deep(obj1);
//	
//	Deep obj2{obj1};
//	obj2.set_data(1000);
	vector <Deep> vec;
	vec.push_back(Deep{10});
	vec.push_back(Deep{20});
	
	return 0;
}