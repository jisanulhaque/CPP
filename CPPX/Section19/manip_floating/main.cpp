#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    double num1{123456789.987654321};
    double num2{1234.5678};
    double num3{1234.0};

    cout<<"------default---------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;

    cout<<setprecision(2);
    cout<<"-----set precision(2)---------\n\a";
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;

    cout<<setprecision(5);
    cout<<"-----set precision(5)---------\n\a";
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;

    cout<<setprecision(3)<<fixed;
    cout<<"-----set precision(3)-fixed---------\n\a";
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;

    cout<<setprecision(3)<<scientific;
    cout<<"-----set precision(3)-scientific---------\n\a";
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;

    cout<<setprecision(3)<<scientific<<uppercase;
    cout<<"-----set precision(3)-scientific-uppercase---------\n\a";
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;

    cout<<setprecision(3)<<scientific<<showpos;
    cout<<"-----set precision(3)-scientific-showpos---------\n\a";
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;

    cout.unsetf(ios::scientific | ios::fixed);
    cout<<resetiosflags(ios::showpos);
    cout<<setprecision(10)<<showpoint;
    cout<<"-----set precision(10)-showpoint--------\n\a";
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;

    cout.unsetf(ios::scientific | ios::fixed);
    cout<<setprecision(6);
    cout<<resetiosflags(ios::showpos);
    cout<<resetiosflags(ios::showpoint);

    cout<<"-----back to defaults--------"<<endl;
    cout<<num1<<endl;
    cout<<num2<<endl;
    cout<<num3<<endl;

    return 0;
}