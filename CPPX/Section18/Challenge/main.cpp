#include <iostream>
#include <memory>
#include <vector>
#include "Account.cpp"
#include "Checking_Account.cpp"
#include "Savings_Account.cpp"
#include "Trust_Account.cpp"
#include "I_Printable.cpp"
#include "Account_Util.cpp"

using namespace std;

int main() {
    // test your code here
    vector<unique_ptr<Account>> accounts;
    accounts.push_back(make_unique<Checking_Account>("Moe", 0.0));
    accounts.push_back(make_unique<Savings_Account>("Curly", 0.0));
    accounts.push_back(make_unique<Trust_Account>("Jisan", 0.0));
    
    try{
        accounts.push_back(make_unique<Trust_Account>("Peter", -100));
    }
    catch(IllegalBalanceException &ex){
        cerr<<ex.what()<<endl;
    }

    try{
        withdraw(accounts, 200);
    }
    catch(InsufficientFundsException &ex){
        cerr<<ex.what()<<endl;
    }

    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

