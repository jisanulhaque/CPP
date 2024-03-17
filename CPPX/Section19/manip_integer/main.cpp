#include <iostream>
#include <iomanip>//need to maipulate the integer here

using namespace std;

int main(){
    int num{255};
    cout<<dec<<num<<endl; //255
    cout<<hex<<num<<endl;//ff
    cout<<oct<<num<<endl;//377

    cout<<"-----------showbase---------------\n";
    cout<<showbase;
    cout<<dec<<num<<endl; //255
    cout<<hex<<num<<endl;//0xff
    cout<<oct<<num<<endl;//0377

    cout<<"-----------showbase:uppercase---------------\n";
    cout<<uppercase; //as showbase still applied to integer, it is not added here
    cout<<dec<<num<<endl; //255
    cout<<hex<<num<<endl;//0XFF
    cout<<oct<<num<<endl;//0377
    
    cout<<"-----------showpos---------------\n";
    cout<<showpos; //It only works with decimal values
    cout<<dec<<num<<endl; //+255 hsowing pluys sign 
    cout<<hex<<num<<endl;
    cout<<oct<<num<<endl;
    //using methods
    cout.setf(ios::showbase);
    cout.setf(ios::uppercase);
    cout.setf(ios::showpos);

    //resettng to defaults
    cout<<resetiosflags(ios::basefield);
    cout<<resetiosflags(ios::showbase);
    cout<<resetiosflags(ios::uppercase);
    cout<<resetiosflags(ios::showpos);
    cout<<"---------------reset to default---------------\n";
    // cout<<dec<<num<<endl; //255 
    // cout<<hex<<num<<endl;//ff
    // cout<<oct<<num<<endl;//377

    cout<<"============See your int=============\n";

    cout<<"Enter your number: ";
    cin>>num;

    cout<<"Decimal default: "<<num<<endl;
 
    cout<<"Hexadecimal:"<<hex<<num<<endl; 
    cout<<"Hexadecimal:"<<hex<<showbase<<uppercase<<num<<endl; 
    cout<<"Hexadecimal:"<<hex<<num<<endl; 
    cout<<"Hexadecimal:"<<hex<<nouppercase<<num<<endl; 

    cout<<"Octal: "<<oct<<num<<endl;
    cout<<"Hexadecimal: "<<hex<<showbase<<num<<endl;
    cout<<"Octal: "<<oct<<num<<endl;
    cout<<endl<<endl;

    return 0;
}