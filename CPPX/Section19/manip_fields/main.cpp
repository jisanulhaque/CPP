#include<iostream>
#include <iomanip>
#include<string>

using namespace std;


void ruler(){
    cout<<"\n12345678901234567890123456789012345678901234567890"<<endl;
}


int main(){
    int num1 {1234};
    double num2{1234.5678};
    string hello{"Hello"};
    cout<<"--------defaults-------"<<endl;
    ruler();
    cout<<num1<<num2<<hello<<endl;

    //width 10 for num1
  
    cout<<"--------width 10 for num1-------"<<endl;
    ruler();
    cout<<setw(10)<<num1
    <<num2
    <<hello<<endl;

    //my practice
    cout<<"--------My Practice-------"<<endl;
    ruler();
    //cout<<setfill('-');
    cout<<setfill('-')<<setw(10)<<right<<num1
    <<setfill('*')<<setw(10)<<left<<num2
    <<setfill('~')<<setw(10)<<left<<hello<<endl;
    return 0;
}