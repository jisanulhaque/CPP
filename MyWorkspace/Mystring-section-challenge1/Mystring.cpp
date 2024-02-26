#include <cstring>
#include <iostream>
#include "Mystring.h"

//No-args constructor
Mystring::Mystring()	
	:str{nullptr}{
	str = new char[1];
	*str = '\0';
}

//Overloading constructor
Mystring::Mystring(const char *s)
	:str{nullptr}{
		if(s == nullptr){
			str = new char[1];
			*str = '\0';
		}else{
			str = new char[std::strlen(s)+1];
			std::strcpy(str, s);
		}
			
	}

//Copy constructor
Mystring::Mystring(const Mystring &source)
	:str{nullptr} {
		str = new char[std::strlen(source.str) + 1];
		std::strcpy(str, source.str);
}

//Move Constructor
Mystring::Mystring(Mystring &&source)
	:str{source.str}{
		source.str =nullptr;
		//std::cout<<"Move constructor used"<<std::endl;
}

//Destructor
Mystring::~Mystring(){
	/*if(str == nullptr)
		std::cout<<"Destructor used for: nullptr"<<std::endl;
	else
		std::cout<<"Destructor used for:"<< str<<std::endl;
	*/
	delete [] str;
}

//Copy Assignment
Mystring &Mystring::operator=(const Mystring &rhs){
	//std::cout<<"Using Copy Assignment"<<std::endl;
	
	if(this == &rhs)
		return *this;
		
	delete [] this->str;
	str = new char[strlen(rhs.str) + 1];
	strcpy(this->str, rhs.str);
	return *this;
}

//Move Assignment
Mystring &Mystring::operator=(Mystring &&rhs){
	//std::cout<<"Using move assignment"<<std::endl;
	
		if(this == &rhs)
			return *this;
			
		 delete [] str; //deallocate
		 str = rhs.str; //stealing the pointer
		 rhs.str = nullptr;
		 
		 return *this; //returning the current object
}

void Mystring::display() const{
	std::cout<<str<<std::endl;
}

int Mystring::get_length() const {return strlen(str);}

const char *Mystring::get_str() const{return str;}


//Incertion Operator
std::ostream& operator<<(std::ostream &os, const Mystring &obj){
	os<<obj.str; //friend of Mystring class
	return os;
}

//Extraction Operator
std::istream& operator>>(std::istream &is, Mystring &obj){ //Mystring obj not const because we are modifying it
	char *buff = new char[1000];
	is >> buff;
	obj = Mystring{buff}; //friend of Mystring class
	delete [] buff;
	return is;
}
	/*****************
	 *Section Challenge
	 ****************/
	Mystring Mystring::operator-() const{
		//makes lowercase
		char *buff = new char[std::strlen(str)+1];
		std::strcpy(buff,str);
		for(size_t i=0; i<std::strlen(str); ++i)
			buff[i] = std::tolower(buff[i]);
		Mystring temp = Mystring{buff};
		delete [] buff;
		return temp;
	}
	
	bool Mystring::operator==(const Mystring &rhs){//a.operator==(b);
		//compares two string
		std::cout<<std::boolalpha;
		return(std::strcmp(str, rhs.str)==0);
	}
	
	bool Mystring::operator!=(const Mystring &rhs){
		//Compares two string
		std::cout<<std::boolalpha;
		return !(std::strcmp(str, rhs.str)==0);
	}
	
	bool Mystring::operator<(const Mystring &rhs){
		//less than
		std::cout<<std::boolalpha;
		return(std::strcmp(str, rhs.str)<0);
	}
	
	bool Mystring::operator>(const Mystring &rhs){
		//greater than
		std::cout<<std::boolalpha;
		return(std::strcmp(str, rhs.str)>0);
	}
	
	Mystring Mystring::operator+(const Mystring &rhs){//not to return reference
		//concatanation
		char *buff = new char[std::strlen(str)+ std::strlen(rhs.str)+1];
		std::strcpy(buff, str);
		std::strcat(buff, rhs.str);
		Mystring temp{buff};
		delete [] buff;
		return temp;
	}
	
	Mystring &Mystring::operator+=(const Mystring &rhs){//returning current obj by ref to avoid unnecessary copying
		//concatanaion a += b =>a = a + b
		*this = *this + rhs;
		return *this;
	}
	
	Mystring Mystring::operator*(int x){
		//Multiply string x times if a =abc then a*=3 =>a = abcabcabc
		Mystring buff;
		for(int i =0; i<x; ++i)
			buff += *this;
		
		return buff;
	}
	
	Mystring &Mystring::operator*=(int x){
		//multiply i times with the lhs string
		*this = *this * x;
		return *this;
	}
	
	Mystring &Mystring::operator++(){//preincrement
		//Makes the string uppercase
		for(size_t i=0; i<std::strlen(str); i++)
			str[i] = std::toupper(str[i]);
		return *this;
////////Previous solution///////////////////		
//		char *buff = new char[std::strlen(str)+1];
//		std::strcpy(buff, str);
//		for(size_t i=0; i<std::strlen(str); ++i)
//			buff[i] = std::toupper(buff[i]);
//		Mystring temp{buff};
//		delete [] buff;
//		return temp;
	}
	
	Mystring Mystring::operator++(int){ //post increment
		Mystring temp{*this};
		operator++();//calling pre-increment
		return temp;
	}
	
