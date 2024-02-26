#include <iostream>

using namespace std;

void double_data(int *int_ptr){
    *int_ptr *=2;
    //int_ptr = int_ptr * 2;
}

int main() {
    int value {10};
    int *int_ptr{nullptr};
    
    cout<<value<<endl;
    double_data(&value); //passing the address of the variable
    cout<<value<<endl;
    cout<<"---------------------"<<endl;
    
    int_ptr = &value; //assigned the address of the variable in the pointer
    
    double_data(int_ptr);
    
    cout<<value<<endl;
    
    return 0;
    }