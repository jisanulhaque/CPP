#include <iostream>
#include "Mystring.h"

using namespace std;

int main(){
	
	Mystring larry{"Larry"};
	larry.display(); //Larry
	
	Mystring larry1 = -larry;
	larry1.display(); //larry
	
	cout<<boolalpha<<endl;
	Mystring moe{"Moe"};
	Mystring stooge = larry;
	
	cout<<(moe==stooge)<<endl; //false
	cout<<(larry==stooge)<<endl; //true
	
	Mystring stooges = "Moe " + larry; //Moe Larry
	stooges.display();
	
	Mystring two_stooges = -larry + " " + "Moe";
	two_stooges.display();
	
	Mystring three_stooges = moe+" "+larry+" "+ "Curly";
	three_stooges.display();
	return 0;
}