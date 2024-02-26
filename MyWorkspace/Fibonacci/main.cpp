#include <iostream>


using namespace std;

//unsigned long long fibonacci(unsigned long long n){
//    if(n<=1)
//        return 1; //Base case
//    return fibonacci(n-1) + fibonacci(n-2);//recursion
//}

double a_penny_doubled_everyday(int n, double penny=0.01){
    if(n==1)
        return penny;
    return a_penny_doubled_everyday(--n, 2*penny);
}

int main() {
    //cout<<fibonacci(40)<<endl;
    cout<<a_penny_doubled_everyday(5)<<endl;
    return 0;
    }