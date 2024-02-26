// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.cpp"
#include "Savings_Account.cpp"
#include "Checking_Account.cpp"
#include "Trust_Account.cpp"
#include "I_Printable.cpp"
#include "Account_Util.cpp"
#include<memory>
// #include "Account_Util.h"

using namespace std; 

void print(const I_Printable &obj){
    cout<<obj<<endl;
}
   
class Test{
    private:
    int data;
    public:
    Test():data{0}{std::cout<<"Test Constructor("<<data<<")"<<std::endl;}
    Test(int data):data{data} {std::cout<<"Test Constructor("<<data<<")"<<std::endl;}
    ~Test(){std::cout<<"Test Destructor("<<data<<")"<<std::endl;}
   };

int main() {
    // Test *t1 = new Test{1000};
    // delete t1;
//    std::unique_ptr<Test>t1{new Test{1000}};
//    std::unique_ptr<Test>t2 = make_unique<Test>(1000);
//    std::unique_ptr<Test>t3;
//    t3=std::move(t1);
//    if(t3)
//     std::cout<<"t3 now owns t1 data"<<std::endl;


    // std::unique_ptr<Account>a1 = std::make_unique<Checking_Account>("Jisan", 5000);
    // std::cout<<*a1<<std::endl;
    // a1->deposit(5000);
    // std::cout<<*a1<<std::endl;

    std::vector<std::unique_ptr<Account>>accounts;

    accounts.push_back(std::make_unique<Checking_Account>("Jisan", 5000));
    accounts.push_back(std::make_unique<Savings_Account>("Sanjana", 4000, 5.2));
    accounts.push_back(std::make_unique<Trust_Account>("Enam", 5000, 4.2));

    for(const auto &acc:accounts)
        std::cout<<*acc<<std::endl;
    return 0;
}

