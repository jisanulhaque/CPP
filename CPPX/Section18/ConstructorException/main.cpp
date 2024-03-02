#include <iostream>
#include <memory>
#include "Account.cpp"
#include "Checking_Account.cpp"
#include "Savings_Account.cpp"
#include "Trust_Account.cpp"
#include "Account_Util.cpp"
#include "I_Printable.cpp"
#include "IllegalBalanceException.h"

using namespace std;

int main() {
    try {
        std::unique_ptr<Account> moes_account = std::make_unique<Checking_Account>("Moe", -10.0);
        std::cout << *moes_account << std::endl;
    }
    catch (const IllegalBalanceException &ex)
    {
        std::cerr << "Couldn't create account - negative balance" << std::endl;
    }
    std::cout << "Program completed successfully" << std::endl;
    return 0;
}

