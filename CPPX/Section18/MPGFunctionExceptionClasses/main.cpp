#include<iostream>

using namespace std;

class DivideByZeroException{

};

class NegativeValueException{

};

double calculate_mpg(int miles, int gallons){
    if(gallons==0)
        throw DivideByZeroException();
    if(miles <0 || gallons < 0)
        throw NegativeValueException();
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
    catch(const DivideByZeroException &ex){
        cerr<<"Tried  to divide by zero"<<endl;
    }
    catch(const NegativeValueException &ex){
        cerr<<"Negative Value aren't allowed"<<endl;
    }
    
    cout<<"Bye..."<<endl;
    return 0;
}