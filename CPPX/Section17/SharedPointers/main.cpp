// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include<memory> //for smart pointers
#include "Account.cpp"
#include "Savings_Account.cpp"
#include "Checking_Account.cpp"
#include "Trust_Account.cpp"
#include "I_Printable.cpp"
#include "Account_Util.cpp"

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

    void func(shared_ptr<Test>p){
        cout<<"Use count: "<<p.use_count()<<endl;
    }
int main() {
    // shared_ptr<int>p1 {new int {1000}};
    // cout<<"Use_count: "<<p1.use_count()<<endl; //1

    // shared_ptr<int>p2 {p1};  //shared ownership
    // cout<<"Use_count: "<<p1.use_count()<<endl; //2

    // p1.reset(); //decrement the use_count, p1 is nulled out
    // cout<<"Use_count: "<<p1.use_count()<<endl;//0
    // cout<<"Use_count: "<<p2.use_count()<<endl;//1
    // cout<<"================================================\n";
    // shared_ptr<Test>ptr = make_shared<Test>(1000);
    // func(ptr);
    // cout<<"Use count: "<<ptr.use_count()<<endl;
    // {
    //     shared_ptr<Test>ptr1 = ptr;
    //     cout<<"Use count: "<<ptr.use_count()<<endl;
    //     {
    //         shared_ptr<Test>ptr2 = ptr;
    //         cout<<"Use count: "<<ptr.use_count()<<endl;
    //         ptr.reset(); 
    //     }
    //     cout<<"Use count: "<<ptr.use_count()<<endl; //0
    // }
    // //destructor call
    // cout<<"Use count: "<<ptr.use_count()<<endl;//0
    ////////////////////////////////////////////////////////////////

    cout<<"\n================================================"<<endl;
    
    shared_ptr<Account>acc1 =make_shared<Trust_Account>("Jisan", 5000, 3.1);
    shared_ptr<Account>acc2 = make_shared<Checking_Account>("Ayisha", 4000);
    shared_ptr<Account>acc3 = make_shared<Savings_Account>("Jon", 3000);
    vector<shared_ptr<Account>>accounts;

    accounts.push_back(acc1);
    accounts.push_back(acc2);
    accounts.push_back(acc3);

    for(const auto &acc: accounts){
        cout<<*acc<<endl;
        cout<<"Use count: "<<acc.use_count()<<endl;
    }
    
    return 0;
}

