#include <iostream>
#include <memory>
#include "Account.cpp"
#include "Checking_Account.cpp"
#include "Savings_Account.cpp"
#include "Trust_Account.cpp"
#include "Account_Util.h"
#include "I_Printable.h"

using namespace std;

int main() {
    // test your code here
    //figure out how to test this code creating accounts and pushing them in vector or creating smart pointers
    unique_ptr<Account>moe = make_unique<Checking_Account>("Moe", 200.0);
    unique_ptr<Account>curly = make_unique<Savings_Account>("Curly", 200.0);
    unique_ptr<Account>jisan = make_unique<Trust_Account>("Jisan", 200.0);

    
    vector<Account *> accounts;
    

    //deposit(accounts, 50);

    // cout<<*moe<<endl;
    // cout<<*curly<<endl;
    // cout<<*jisan<<endl;


    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

