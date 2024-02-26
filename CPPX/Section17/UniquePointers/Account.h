// Simple Account 
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_
#include <iostream>
#include <string>
#include "I_Printable.h"

class Account: public I_Printable { // Abstract Clss
private:   
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account(std::string name = def_name, double balance = def_balance);//constructor
    virtual bool deposit(double amount)=0;//PVF
    virtual bool withdraw(double amount)=0; //PVF
    virtual ~Account()=default; //virtual destructor
};
#endif

//PVF-Pure Virtual Function