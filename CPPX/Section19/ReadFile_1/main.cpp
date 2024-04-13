#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main(){
    std::ifstream in_file;
    /*
    *Stating the file name/directory is mostly OS and IDE specific
    *If we use '\'this will be counted as a char so '\\' need to used for win os
    *Better to use '/' it will be ok for all
    */

    in_file.open("test.txt");//this file should be with the executable file
    string line; 
    int num;
    double dob;
    if(!in_file){ //also do (!in_file.is_open())
        cerr<<"Problem opening the file"<<endl;
        return 1;
    }
    cout<<"File is good to go"<<endl;

    while(in_file>>line>>num>>dob){ //alternate: (!in_file.eof())

    cout<<setw(10)<<left<<line
        <<setw(10)<<num
        <<setw(10)<<dob
        <<endl;
    }
    in_file.close();

    return 0;
}