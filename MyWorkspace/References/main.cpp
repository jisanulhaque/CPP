#include <iostream>
#include <vector>


using namespace std;



void reverse_array(int *arr, int size) {
    //-- Write your code below this line 
    
    for(int i{}; i<size/2; ++i){
        int first_arr[size/2]{}, last_arr[size/2]{};
        first_arr[i] = arr[i];
        last_arr[i] = arr[size-i-1];
        
        arr[i] = last_arr[i];
        arr[size-i-1] = first_arr[i];
    }
    //-- Write your code above this line
}

void display(int *arr, int size){
    for(int i{}; i<size; ++i)
        cout<<arr[i]<<" ";
    cout<<endl;
}



int main() {
//    int num{100};
//    int &ref{num};
//    
//    cout<<num<<endl; //100
//    cout<<ref<<endl; //100 basically behind the scene it is a pointer, all that is abstracted
//
//    num = 200;
//    cout<<"\n-----------------"<<endl;
//    cout<<num<<endl;
//    cout<<ref<<endl;
//    
//    ref=300;
//    cout<<"\n---------------------"<<endl;
//    cout<<num<<endl;
//    cout<<ref<<endl;
//    
//    cout<<"\n========================"<<endl;
//    
//    vector <string> stooges{"Larry","Moe", "Curly"};
//    
//    for(auto str:stooges)
//        str="Funny";        //Chnages the copy
//        
//    for(auto str:stooges)
//        cout<<str<<endl; 
//    cout<<"\n--------------------------"<<endl;
//    for(auto &str:stooges)
//        str = "Funny";      //str is reference to each vector element
//        
//    for(auto const &str:stooges) //notice we are using const
//        cout<<str<<endl;         //now the vector elements are changed
            
    int arr[] {1,2,3,4,5};
    
    reverse_array(arr, 5);
    display(arr, 5);
    
    return 0;
    }