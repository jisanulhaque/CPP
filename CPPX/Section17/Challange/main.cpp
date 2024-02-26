//Section 17
//Section Challange

#include<iostream>
#include<vector>
#include<memory>

using namespace std;

class Test{
    friend void fill(vector<shared_ptr<Test>>&vec, int num);
    friend void display(const std::vector<shared_ptr<Test>>&vec);

    private:
    int data;

    public:
    Test():data{0}{std::cout<<"Test Constructor("<<data<<")"<<std::endl;}
    Test(int data):data{data} {std::cout<<"Test Constructor("<<data<<")"<<std::endl;}
    ~Test(){std::cout<<"Test Destructor("<<data<<")"<<std::endl;}
   };

    //Fucntion Prototype
    auto make();
    void fill(vector<shared_ptr<Test>> &vec, int num);
    void display(const std::vector<shared_ptr<Test>>&vec);

 auto make(){
        return make_unique<vector<shared_ptr<Test>>>();
    }

int main(){
    
    unique_ptr<vector<shared_ptr<Test>>>vec_ptr; 
    vec_ptr = make();
    int num;
    cout<<"How many data points you want to enter: ";
    cin>>num;
    fill(*vec_ptr, num);
    cout<<"Its working"<<endl;
    display(*vec_ptr);

    return 0;
}

   
    void fill(vector<shared_ptr<Test>>&vec, int num){
        int a;
        for(size_t i{0}; i<num; i++){
            cout<<"Enter element["<<i+1<<"]: ";
            cin>> a; 
            vec.push_back(make_shared<Test>(a)); 
        }
    }

    void display(const std::vector<shared_ptr<Test>>&vec){
        //iterate all the elements and display
        cout<<"=======================================\n";
        for(const auto &v:vec){
            cout<<v->data<<std::endl; //it will return only addresses
        }
        cout<<"======================================\n";
    }