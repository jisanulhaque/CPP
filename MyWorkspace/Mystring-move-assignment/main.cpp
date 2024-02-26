#include <iostream>
#include <vector>
#include "Mystring.h"

using namespace std;

int main(){
	
	Mystring a {"Hello"}; //Copy Assignment
	a = Mystring{"Hola"}; //Overloaded constructor then Move Assignment
	a = "Bonjour"; //Overkloaded constructopr then move assignment 
	
	return 0;
}