#include <iostream>
#include "Mystring.h"

using namespace std;

int main(){
	Mystring larry{"Larry"};
	Mystring moe{"Moe"};
	Mystring curly;
	
	cout<<"Enter th ethird stooge's first name: ";
	cin >> curly;
	
	cout<<"Three stooges are "<<larry<< ", "<<moe<<" and "<<curly<<endl;
	
	cout<<"\nEnter the three stooges name seperated by space: ";
	cin>>larry>>moe>>curly;
	
	cout<<"Three stooges are "<<larry<< ", "<<moe<<" and "<<curly<<endl;
	return 0;
}