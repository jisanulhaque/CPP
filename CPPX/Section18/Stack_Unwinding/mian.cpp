#include<iostream>

using namespace std;
//Prototypes
void func_a();
void func_b();
void func_c();

void func_a(){
    cout<<"Starting func_a"<<endl;
    func_b();
    cout<<"Ending fucn_a"<<endl;
}

void func_b(){
    cout<<"Starting func_b"<<endl;
    
    func_c();
   
    cout<<"Ending fucn_b"<<endl;
}

void func_c(){
    cout<<"Starting func_c"<<endl;
    try{
    throw 100;
    }
    catch(int &ex){
        cerr<<"Error found in func_c"<<endl;
    }
    cout<<"Ending fucn_c"<<endl; 
}


int main(){
    cout<<"Starting main"<<endl;
    
    func_a();
   
    cout<<"Ending main"<<endl;
    return 0;
}