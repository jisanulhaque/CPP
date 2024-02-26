#include <iostream>
#include <vector>
#include<memory> //for smart pointers


using namespace std; 

   
class Test{
    private:
    int data;
    public:
    Test():data{0}{std::cout<<"Test Constructor("<<data<<")"<<std::endl;}
    Test(int data):data{data} {std::cout<<"Test Constructor("<<data<<")"<<std::endl;}
    ~Test(){std::cout<<"Test Destructor("<<data<<")"<<std::endl;}
   };

    void func(shared_ptr<Test>p){
        cout<<"Use count: "<<p.use_count()<<endl;
    }

    void my_deleter(Test *ptr){
        cout<<"In my deleter fucn"<<endl;
        delete ptr;
    }

    int main(){
        {
        //fucn deleter
        shared_ptr<Test>ptr1 {new Test{100}, my_deleter};
        }

        {
        //Lamda
        shared_ptr<Test>ptr2(new Test{1000},
        [](Test *ptr){
            cout<<"Using my deleter lamda"<<endl;
            delete ptr;
        });
        }
        return 0;
    }