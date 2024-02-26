#include <iostream>
#include <string>

using namespace std;

int num{300};//Global variable

void static_example(){
    static int num{5000};
    cout<<"\nLocal static num is "<<num<<" in static_example-start"<<endl;
    num+=1000;
    cout<<"Local static num is "<<num<<" in static_example -end"<<endl;
}


void global_example(){
    cout<<"\nGlobal num is "<<num<<" in global_example-start"<<endl;
    num*=2;
    cout<<"Global num is "<<num<<" in global_example-end"<<endl;
}

void local_example(int x){
    int num{1000}; //local to local_example
    cout<<"local num is "<<num<<"in local_example -start"<<endl;
    num=x;
    cout<<"nlocal num is "<<num<<" in local_examle-end"<<endl;
    cout<<endl;
}


int main() {
//    int num{100}; //Local to main
//    int num1{200};//Local to main
//    
//    cout<<"Local num is "<<num<<" in main"<<endl;
//    {//Creates a new level of scope
//        int num{300};
//        cout<<"Local num is "<<num<<" in inner block of main"<<endl;
//        cout<<"Inner block in main can see num1 is "<<num1<<endl;
//    }
//    
//    cout<<"Local num is "<<num<<" in main"<<endl;
//    
//    local_example(10);
//    local_example(20);
//    global_example();
//    global_example();
//    
    static_example();
    static_example();
    
    
    return 0;
    }