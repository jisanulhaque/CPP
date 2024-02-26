#include <iostream>
#include "Mystring.h"

using namespace std;

int main(){
	Mystring a{"Frank"};
	Mystring b{"Jisan"};
	
//	cout<<-a<<endl;
//	cout<<(a==b)<<endl; //false
//	cout<<(a!=b)<<endl;//true
//	cout<<(a<b)<<endl;//true a is less than b
//	cout<<(a>b)<<endl;//false a is not grester than b

	Mystring c;
	c = a + b + " works fine"; //frankjisan works fine
	cout<<c<<endl;
	a += " and moe are three stooges";
	cout<<a<<endl;
	a = b * 3;
	cout<<a<<endl;
	c *=3;
	cout<<c<<endl;
	Mystring d{"pascal"};
	//Mystring e {"hoga"};
	cout<<++d<<endl;
	cout<<d++<<endl;
	return 0;
}