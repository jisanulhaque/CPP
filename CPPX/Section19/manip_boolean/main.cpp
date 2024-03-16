#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    cout<<"noboolalpha- default (10==10): "<<(10==10)<<endl; //0
    cout<<"noboolalpha- default (10==10): "<<(10==20)<<endl; //1
    //set to true/false formatting
    cout<<boolalpha;
    cout<<"boolalpha default (10==10): "<<(10==10)<<endl; //true
    cout<<"boolalpha- default (10==10): "<<(10==20)<<endl; //false

    //setting still stays for boolean insertions
    cout<<"boolalpha default (10==10): "<<(10==10)<<endl; //true
    cout<<"boolalpha- default (10==10): "<<(10==20)<<endl; //false

    //toggle to 0/1
    cout<<noboolalpha;
    cout<<"noboolalpha- default (10==10): "<<(10==10)<<endl; //0
    cout<<"noboolalpha- default (10==10): "<<(10==20)<<endl; //1

    //set back to true/false using setf method
    cout.setf(std::ios::boolalpha);
    cout<<"boolalpha default (10==10): "<<(10==10)<<endl; //true
    cout<<"boolalpha- default (10==10): "<<(10==20)<<endl; //false

    //reset to default which is 0/1
    cout<<std::resetiosflags(std::ios::boolalpha);
    cout<<"default (10==10): "<<(10==10)<<endl; //0
    cout<<"default (10==10): "<<(10==20)<<endl; //1
    return 0;
}