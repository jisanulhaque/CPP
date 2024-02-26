#include <iostream>
#include <vector>
#include <string>

using namespace std;

int *create_array(size_t size, int init_value){
    int *new_storage{nullptr};
    
    new_storage = new int[size];
    
    for(size_t i{0}; i<size; ++i)
        *(new_storage + i)= init_value;
    return new_storage;
}


void display(const int *const array, size_t size){
    for(size_t i{0}; i<size; ++i)
        cout<<array[i]<<" ";
    cout<<endl;
    
}

int main() {
    int *my_array{nullptr};
    
    int init_value{};
    size_t size{};
    
    cout<<"Select the size of the array: ";
    cin>>size;
    
    cout<<"select the initializing value: ";
    cin>>init_value;
    
    my_array = create_array(size, init_value);
    cout<<"\n---------------------------------"<<endl;
    
    display(my_array, size);
    delete [] my_array;
    my_array = nullptr;
    /////////////////////////////////////////////////
    int *test_arr{nullptr};
    
    test_arr=create_array(10, 2);
    display(test_arr, 10);
    
    display(my_array, size);
    return 0;
    }