#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(int);
void print(double);
void print(string);
void print(string, string);
void print(vector<string>);


void print(int num){
    cout<<"Printing int: "<<num<<endl;
}

void print(double num){
    cout<<"Printing double: "<<num<<endl;
}

void print(string s){
    cout<<"Printing string "<<s<<endl;
}

void print(string s, string t){
    cout<<"Printing 2 string "<<s<<" "<<t<<endl;
}

void print(vector<string> v){
    cout<<"Printing vector of string ";
    for(auto c: v)
        cout<<c + " ";
    cout<<endl;
}




int main() {
    print(100);
    print('A');//character always promoted to int, 65 ASCII A
    print(123.5);//double
    print(123.5F);//float promoted to double
    print("C-style string"); //converted to C-style string
    
    string s{"C++ style string Object"};
    
    print(s); //C++ String object
    print("C-style string", s);//first C-style literal converted to C++ String
    
    vector<string> three_stooges{"Larry", "Moe", "Jisan"};
    print(three_stooges);
    
    
    return 0;
    }