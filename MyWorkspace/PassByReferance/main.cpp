#include <iostream>
#include <string>
#include <vector>

using namespace std;

void pass_by_ref1(int &num);
void pass_by_ref2(string &s);
void pass_by_ref3(vector <string>&v);
void print_vector(const vector<string>&v);
 

//////////////////////////////////////////
void pass_by_ref1(int &num){
    num=1000;
}

void pass_by_ref2(string &s){
    s="changed";
}

void pass_by_ref3(vector <string>&v){
    v.clear(); //delet all vector elements
}

void print_vector(const vector<string>&v){
    for(auto s:v)
        cout<<s<<" ";
    cout<<endl;
}

int main() {
    int num{10};
    int nother_num{20};
    
    cout<<"Before calling pass_by_ref1: "<<num<<endl;
    pass_by_ref1(num);
    cout<<"After calling pass_by_ref1: "<<num<<endl;
    
    
    string name{"Jisan"};
    cout<<"name before calling pass_by_ref2: "<<name<<endl;
    pass_by_ref2(name);
    cout<<"anme after calling pass_by_ref1: "<<name<<endl;
    
    vector<string>stooges{"Larry", "Moe", "Curly"};
    cout<<"stooges before calling pass_by_ref3: ";
    print_vector(stooges);
    pass_by_ref3(stooges);
    cout<<"stooges after calling pass_by_ref3 ";
    print_vector(stooges);
    

    function();
    function();
    function();
    return 0;
    }