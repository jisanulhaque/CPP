#include <iostream>
#include <string>

using namespace std;

int main() {
//    int scores [] {100, 95, 89};
//    cout<<"Value of scores: "<<scores<<endl;
//    
//    int *score_ptr {scores};
//    cout<<"Value of score pointer: "<<score_ptr<<endl;
//    
//    cout<<"\nArray Subscript"<<endl;
//    cout<<scores[0]<<endl;
//    cout<<scores[1]<<endl;
//    cout<<scores[2]<<endl;
//    
//    cout<<"\nPointer subscript"<<endl;
//    cout<<score_ptr[0]<<endl;
//    cout<<score_ptr[1]<<endl;
//    cout<<score_ptr[2]<<endl;
//    
//    cout<<"\nPointer offset notation"<<endl;
//    cout<<*score_ptr<<endl;
//    cout<<*(score_ptr+1)<<endl;
//    cout<<*(score_ptr+2)<<endl;
//    
//    cout<<"\nArray offset notation"<<endl;
//    cout<<*scores<<endl;
//    cout<<*(scores+1)<<endl;
//    cout<<*(scores+2)<<endl;
    
    int high_score{100};
    int low_score{65};
    
    const int *score_ptr{&high_score};
    
    //*score_ptr=87; //Error
    
    high_score = 87;
    cout<<score_ptr<<endl;
    
    score_ptr=&low_score;
    //*score_ptr=78;
    cout<<&high_score<<endl;
    cout<<score_ptr<<endl;
    cout<<*score_ptr<<endl;
    
    
    return 0;
    }