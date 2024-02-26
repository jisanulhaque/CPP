#include<iostream>

using namespace std;

double calculate_mpg(int miles, int gallons){
    if(gallons==0)
        throw 0;
    return static_cast<double>(miles)/gallons;
    }

int main(){
    cout<<"It works"<<endl;
    int miles{};
    int gallons{};
    double miles_per_gallon{};

    cout<<"Enter miles: ";
    cin>>miles;
    cout<<"Enter gallons: ";
    cin>>gallons;

    // miles_per_gallon = calculate_mpg(miles, gallons);
    // cout<<"Result: "<<miles_per_gallon<<endl;

    try{
        miles_per_gallon = calculate_mpg(miles, gallons);
        cout<<"Result: "<<miles_per_gallon<<endl;
    }
    catch(int &ex){
        cerr<<"Tried  to divide by zero"<<endl;
    }
    cout<<"Bye..."<<endl;
    return 0;
}