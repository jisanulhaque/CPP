#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    int *int_ptr{nullptr};
    int_ptr=new int;
    cout<<int_ptr<<endl;
    delete int_ptr;
    cout<<int_ptr<<endl;
    
    size_t size{};
    double *temp_ptr{nullptr};
    
    cout<<"How many temps?";
    cin>>size;
    //while(true)    //causing memory leak all around and we'r gonna run out of memory in HEAP!!
    temp_ptr=new double[size];
    
    cout<<temp_ptr<<endl;
    
    delete [] temp_ptr;
    temp_ptr=nullptr;
    
    cout<<temp_ptr<<endl;
    
    
    
    
    return 0;
    }