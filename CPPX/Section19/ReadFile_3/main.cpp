#include<iostream>
#include<fstream>

using namespace std;

int main(){
    ifstream in_file;
    in_file.open("poem.txt");
    if(!in_file){
        cerr<<"Problem opening the file"<<endl;
        return 1;
    }

    string line;
    while(getline(in_file, line)){
        cout<<line<<endl;
    }
    cout<<endl;
    in_file.close();

    return 0;
}