#include<iostream>
#include<memory>

using namespace std;

class B;

class A{
    std::shared_ptr<B>b_ptr;
    public:
    void set_b(std::shared_ptr<B>&b){
        b_ptr = b;
    }
    A( ){cout<<"A constructor"<<endl;}
    ~A(){cout<<"A Destructor"<<endl;}
};

class B{
    weak_ptr<A>a_ptr;
    public:
    void set_a(shared_ptr<A>&a){
        a_ptr = a;
    }
    B(){cout<<"B Constructor"<<endl;}
    ~B(){cout<<"B Destructor"<<endl;}
};

int main(){
    shared_ptr<A> a = make_shared<A>();
    shared_ptr<B> b = make_shared<B>();
    a->set_b(b);
    b->set_a(a);

    return 0;
}