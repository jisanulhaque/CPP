#include <iostream>
#include <string>
#include <vector>

using namespace std;

void display(const vector <string> *const v){
    //(*v).at(0)="Funny"; //Error due to pointer to const
    for(auto str:*v)
        cout<<str<<" ";
    cout<<endl;
    //v=nullptr; //Error due to const pointer to const
}

void display(int *array, int sentinel){
    while(*array!=sentinel){
        cout<<*array++<<" ";
    }

    cout<<endl;
}
int main() {
//    vector <string> stooges{"Larry", "Moe", "Curly"};
//    display(&stooges);

    int array[]{100, 97, 95, -1};
    display(array, -1);
    
    return 0;
    }