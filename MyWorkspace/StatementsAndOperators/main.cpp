#include <iostream>
using namespace std;


int main() {
    
//   int total {};
//   int num1{},num2{},num3{};
//   const int count {3};
//   
//   cout<<"Enter 3 numbers seperated by space: "<<endl;
//   cin>>num1>>num2>>num3;
//   
//   total=num1+num2+num3;
//   double average {0.0};
//   
//   average=static_cast<double>(total)/count;
//   
//   cout<<"Three numbers are "<<num1<<", "<<num2<<", "<<num3<<endl;
//   cout<<"Total of the numbers are "<<total<<endl;
//   cout<<"Average of the number is "<<average<<endl;
////////////////////////////////////////////////////////////////////////////
//EQUALITY OPERATORS
////////////////////////////////////////////////////////////////////////////

//    bool equal_result {false};
//    bool not_equal_result{false};
//    
//    int num1{}, num2{};
//    cout<<boolalpha; //will display true or false instead of 0/1
//     
//    cout<<"Enter two numers seperated by space: ";
//    cin>>num1>>num2;
//     
//    equal_result=(num1==num2);
//    not_equal_result=(num1!=num2);
//    
//    cout<<"Comparison result equals: "<<equal_result<<endl;
//    cout<<"Comparison result not equals: "<<not_equal_result<<endl;
////////////////////////////////////////////////////////////////////////
//RELATIONAL OPERATOR
////////////////////////////////////////////////////////////////////////
//    int num1{}, num2{};
//    cout<<"Enter two numbers seperated by space: ";
//    cin>>num1>>num2;
//    cout<<boolalpha;
//    cout<<num1<<" > "<<num2<<" "<<(num1>num2)<<endl;
//    cout<<num1<<" < "<<num2<<" "<<(num1<num2)<<endl;
//    cout<<num1<<" >= "<<num2<<" "<<(num1>=num2)<<endl;
//    cout<<num1<<" <= "<<num2<<" "<<(num1<=num2)<<endl;
//////////////////////////////////////////////////////////////////////////
//RELATIONAL OPERATORS
/////////////////////////////////////////////////////////////////////////
//    int num{};
//    const int lower{10};
//    const int upper {20};
//    
//    cout<<boolalpha;
    
//    cout<<"ENter a number btween "<<lower<<" and "<<upper<<" limit.";
//    cin>>num;
//    
//    bool within_bounds {false};
//    
//    within_bounds=(num>lower && num<upper);
//    cout<<num<<" is between the "<<lower<<" and "<<upper<<" limit: "<<within_bounds<<endl;

//
//    cout<<"ENter a number out of bound than "<<lower<<" and "<<upper<<" limit.";
//    cin>>num;
//    
//    bool out_of_bound {false};
//    
//    out_of_bound=(num<lower || num>upper);
//    cout<<num<<" is out of bound from "<<lower<<" and "<<upper<<" limit: "<<out_of_bound<<endl;


    //We are gonna detemine wheather to wear a coat or not
//    bool wear_coat{false};
//    double temperature {};
//    int wind_speed {};
//    
//    const int wind_speed_for_coat {25}; //mph //over this speed you need wind_speed_for_coat
//    const double temperature_to_wear_coat {45}; //F //below this will require wind_speed_for_coat
//    cout<<boolalpha;
//    cout<<"\nEnter the current temperature: ";
//    cin>>temperature;
//    cout<<"\nEnter the current wind speed: ";
//    cin>>wind_speed;
//    
//    //and statement
//    wear_coat=(temperature<temperature_to_wear_coat && wind_speed>wind_speed_for_coat);
//    cout<<"You need to wear coat today(and): "<<wear_coat<<endl;
//    
//    //or statement
//    wear_coat=(temperature<temperature_to_wear_coat || wind_speed>wind_speed_for_coat);
//    cout<<"You need to wear coat today(or): "<<wear_coat<<endl;
////////////////////////////////////////////////////////////////////////////////////////
//SECTION CHELLANGE
//////////////////////////////////////////////////////////////////////////////////////

int no_of_cents{};
cout<<"Enter an amount in cents: ";
cin>>no_of_cents;

int dollar{}, quarter{}, dime{}, nikle{}, penny{}, left_over{};

const int one_dollar{100}, one_quarter{25}, one_dime{10}, one_nikle{5}, one_penny{1};

dollar=no_of_cents/one_dollar;
left_over=no_of_cents-(dollar*one_dollar);

quarter=left_over/one_quarter;
left_over-=(quarter*one_quarter);

dime=left_over/one_dime;
left_over-=(dime*one_dime);

nikle=left_over/one_nikle;
left_over-=(nikle*one_nikle);

penny=left_over/one_penny;


cout<<"You can provide this change as follows: \n";
cout<<"dollar: "<<dollar<<endl;
cout<<"quarters: "<<quarter<<endl;
cout<<"dime: "<<dime<<endl;
cout<<"nikle: "<<nikle<<endl;
cout<<"penny: "<<penny<<endl;






    return 0;
    }