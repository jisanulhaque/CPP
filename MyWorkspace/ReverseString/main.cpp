#include <iostream>

//Section 12 Challenge
using namespace std;

int *apply_all(int arr1[], size_t arr1_size, int arr2[], size_t arr2_size){
    int *new_arr{nullptr};
    size_t new_size = arr1_size * arr2_size;
    
    new_arr = new int[new_size]; //created new array
    
    for(unsigned i{0}; i < arr2_size; ++i){
        for(unsigned j{0}; j < arr1_size; ++j){
            static int k{0};
            new_arr[k] = (arr2[i] * arr1[j]);
            k++;
        }
    }
    return new_arr;
}

void print(int *arr, size_t arr_size){
    cout<<"[";
    for(size_t i{}; i<arr_size; i++)
        cout<<*(arr+i)<<" ";
    cout<<"]"<<endl;
}

using namespace std;

int main() {
    const size_t array1_size{5};
    const size_t array2_size{3};
    
    int array1[]{1,2,3,4,5};
    int array2[]{10,20,30};
   
    cout<<"Array1: ";
    print(array1, array1_size);
    
    cout<<"Array2: ";
    print(array2, array2_size);
    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};
    
    cout<<"results: ";
    print(results, results_size);
    
    delete [] results;


    return 0;
    }