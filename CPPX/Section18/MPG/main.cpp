#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    cout<<"It works"<<endl;
    int miles{};
    int gallons{};
    double miles_per_gallon{};

    cout<<"Enter miles: ";
    cin>>miles;
    cout<<"Enter gallons: ";
    cin>>gallons;
    //Handling exception using conditional statements
    //miles_per_gallon = miles/gallons;
    // if(gallons !=0){
    //     miles_per_gallon = static_cast<double>(miles)/gallons;
    //     // cout<<setprecision(3); 
    //     cout<<"Result: "<<miles_per_gallon<<endl;
    // }else{
    //     cerr<<"Sorry! can't divide by zero"<<endl;
    // }
    
    // cout<<"Bye..."<<endl;

    //Exception Handler
//     try{
//         if(gallons == 0)
//             throw 0;
//         miles_per_gallon = static_cast<double>(miles)/gallons;
//         cout<<"Result: "<<miles_per_gallon<<endl;
//     }
//     catch(int &ex){
//         cerr<<"Sorry! can't divide by zero"<<endl;
//     }
//     cout<<"Bye..."<<endl;
//     return 0;
// }

try{
        if(gallons == 0)
            throw 0;
        miles_per_gallon = static_cast<double>(miles)/gallons;
        cout<<"Result: "<<miles_per_gallon<<endl;
    }
    catch(int &ex){
        cerr<<"Sorry! can't divide by zero"<<endl;
    }
    cout<<"Bye..."<<endl;
    return 0;
}