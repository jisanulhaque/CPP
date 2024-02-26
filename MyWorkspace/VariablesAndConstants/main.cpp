#include <iostream>
#include <climits> 
using namespace std;
int main() {
    /**************************************************************************************
     * Best practice is to initialize the vartiable evenif it will be read from inoput stream
     * decl the variable close the when it is used
     ***************************************************************************************/ 
    
    
//    cout<<"Enter the width of the room: ";
//    int room_width {0};//initialize close to the usage of the variable.
//    cin>>room_width;
//    
//    cout<<"Enter the length of the room: ";
//    int room_length {0};
//    cin>>room_length;
//    
//    cout<<"The area of the room is: "<<room_length*room_width<<" SqFt\a"<<endl;
/***************************
 * C++ Premetives Data Types
 ****************************/
 
 /****************************************
  * Character Type
  ****************************************/
//    char my_char{'J'};// Used single qout for decl char
//    cout<<my_char<<endl;
//    
//    //integers
//    int countries {65};
//    cout<<"There are total "<<countries<<" countries."<<endl;
//    
//    //long integers
//    long long people {1234670456763};
//    cout<<"There are about "<<people<< " people in cumilla city"<<endl;
//    
//    //unsigned short int
//    unsigned short my_examscore {55};//same as unsigned short int
//    cout<<"My exam score is "<<my_examscore<<endl;
//    
//    //Floating Points
//    float my_carbill {23.32};
//    cout<<"My car bill is "<<my_carbill<<" dollars."<<endl;
//    //Double 
//    double pi {3.141634567};
//    cout<<"The value of pi is "<<pi<<endl;
//    //long double
//    long double large_amount {2.7e-98};//more than 02 digits after e will cause an overflow
//    cout<<large_amount<<endl;
//    //boolean
//    bool game_over {false};
//    cout<<"The value of game over is "<<game_over<<endl;//It will print zero as false.
//    //Example of overflow
//    short value1 {1000};
//    short value2 {3000};
//    short product{value1*value2};//this will cause an overflow
//    cout<<product<<endl;
/********************************************************************************
 * SizeOf Operator
 *******************************************************************************/
//    cout<<"Size of info:"<<endl;
//    cout<<"Size of int:"<<sizeof(int)<<endl;
//    cout<<"Size of char:"<<sizeof(char)<<endl;
//    cout<<"Size of double:"<<sizeof(double)<<endl;
//    cout<<"Size of unsigned int:"<<sizeof(unsigned int)<<endl;
//    cout<<"Size of short:"<<sizeof(short)<<endl;
//    cout<<"Size of float:"<<sizeof(float)<<endl;
//    cout<<"Size of long long:"<<sizeof(long long)<<endl;
//    //minimum value
//    cout<<"====================================="<<endl;
//    cout<<"CHar"<<CHAR_MIN<<endl;
//    cout<<"int"<<INT_MIN<<endl;
//    //maximum values
//    cout<<"char"<<CHAR_MAX<<endl;
//    cout<<"long long"<<LLONG_MAX<<endl;
    //size of variables
//    char my_name {'j'};
//    int age {30};
//    double pi {3.1416};
//    
//    cout<<"size of char"<<sizeof(my_name)<<endl;
//    cout<<"size of int"<<sizeof(age)<<endl;
//    cout<<"size of "<<sizeof(pi)<<endl;
///////////////////////////////////////////////////////
//Constants
//////////////////////////////////////////////////////
//    const double price_per_small_room {25};
//    const double price_per_large_room {35};
//    const double sales_tax {0.07};
//    const int estimate_expiry {30};//days
//    
//    
//    cout<<"Welcome to jisan's carpet cleaning service"<<endl;
//    cout<<"\nHow many small rooms would you like to get cleaned: ";
//    int number_of_small_rooms {0};
//    cin>>number_of_small_rooms;
//    
//    cout<<"\nHow many large rooms would you like to get cleaned: ";
//    int number_of_large_rooms {0};
//    cin>>number_of_large_rooms;
//    
//    cout<<"Estimate for the room cleaning service."<<endl;
//    cout<<"\nNumber of small rooms: "<<number_of_small_rooms<<endl;
//    cout<<"Number of large rooms: "<<number_of_large_rooms<<endl;
//    
//    cout<<"Cost per small room: BDT"<<price_per_small_room<<endl;
//    cout<<"Cost per large room: BDT"<<price_per_large_room<<endl;
//    
//    double cost {(number_of_small_rooms*price_per_small_room)+(number_of_large_rooms*price_per_large_room)};
//    cout<<"Cost: BDT"<<cost<<endl;
//    double tax {cost*sales_tax};
//    cout<<"Tax: BDT"<<tax<<endl;
//    cout<<"========================================"<<endl;
//    cout<<"Total: BDT"<<cost+tax<<endl;
//    cout<<"The estimate will be valid for "<<estimate_expiry<<" days."<<endl;
///////////////////////////////////////////////////////////////////////////////
//
///////////////////////////////////////////////////////////////////////////////    

    return 0;
    }