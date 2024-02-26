#include <iostream>
#include <vector>
#include <cctype>

using namespace std;
//////////////Prototypes////////////////////
void print_menu();
char user_input();
void print_vec(const vector <int> &number);
void display_vec(const vector <int> &number);
void add_num(vector <int> &a);
void mean_num(const vector <int> &a);
void smallest_num(const vector <int> &number);
void largest_num(const vector <int> &number);
void find_num(const vector <int> &number);
bool find(const vector <int> &number, int target);
inline void quit_program(); //inline fuction
////////////////////////////////////////////


int main() {
    char selection;
    vector<int>number {5,4,7,3,8};
    //vector<double>number{};
    //cout<<number.size()<<endl;
    do{
        print_menu();
        
        //cout<<"Select your option: ";
        selection = user_input();
        
        switch(selection){
            case 'P':
            {//print all the elements
                print_vec(number);                
                cout<<"---------------------------------------\n";
            }
            break;
            
            case 'A':
            {//Add new int in the list
                add_num(number);
                cout<<"-------------------------------------\n";
            }
            break;
            
            case'M':
            {
                //Mean of the numbers
                mean_num(number);
            }
            break;
            
            case'S':
            {//Samllestnumber
                smallest_num(number);
            }
            
            break;

            case 'L':
            {
                //Largest Number
                largest_num(number);
                
            }
            break;

            case 'F':
            {
            //Finding the number
                find_num(number);
            }
            break;

            case'Q':
            //quit the program
                quit_program();
            break;
            
            default:
                cout<<"Unknown selection, please try again\a"<<endl;
        }
        
    }while(selection!='Q');
    
    return 0; 
    }
    
    
/////////////////////Function Definations///////////////////
void print_menu(){
    cout<<"P - Print numbers"<<endl;
    cout<<"A - Add a number"<<endl;
    cout<<"M - Display mean of the numbers"<<endl;
    cout<<"S - Display the smallest number"<<endl;
    cout<<"L - Display the largest number"<<endl;
    cout<<"F - Find a number"<<endl;
    cout<<"Q - Quit"<<endl;
}

char user_input(){
    char selection; 
    cin>>selection;
    return toupper(selection);
}

void print_vec(const vector <int> &number){
    if(number.size()==0)
        cout<<"[]-the list is empty\a"<<endl;
    else
        display_vec(number);
}

void display_vec(const vector <int> &number){
    cout<<"[";
    for(auto val:number){ //used range based for loop as on values to print on the console
        cout<<val<<" ";
    }
    cout<<"]"<<endl; 
}

void add_num(vector <int> &a){
    double num{};
    cout<<"Enter the number you want to add: ";
    cin>>num;
    a.push_back(num);
    cout<<num<<" added."<<endl;
}

void mean_num(const vector <int> &a){
    double result{};
    double mean{};
    if(a.size()>0){
    for(unsigned i{}; i<a.size(); ++i){
        result+=a[i];
    }
    mean=result/a.size();
    cout<<"The mean of the elements are: "<<mean<<endl;
    }else
    cout<<"Unable to calculate the mean-No data.\a"<<endl;
                
    cout<<"------------------------------\n";   
}

void smallest_num(const vector <int> &number){
    if(number.size()==0)
        cout<<"Unable to determine the samllest-lsit is empty"<<endl;
    else{
        int smallest=number.at(0);
        for(auto num:number){
            if(num<smallest)
                smallest=num;
        }
        cout<<"The smallest number is: "<<smallest<<endl;
    }   
}

void largest_num(const vector <int> &number){
    if(number.size()==0)// using 0 is more specific
        cout<<"Unable to determine the largest number-list is empty\a"<<endl;
    else{
        int largest=number.at(0);
        for(auto num:number){
            if(num>largest)
                largest= num;
        }
        cout<<"The largest number in the list is: "<<largest<<endl;
    }
    cout<<"----------------------------------------\n";    
}

void find_num(const vector <int> &number){
    int target{};
    cout<<"Enter number you want ot find: ";
    cin>>target;
    if(find(number, target))
        cout<<target<<" is found in the list"<<endl;
    else
        cout<<target<<" is not found in the list"<<endl;
    
    cout<<"-----------------------------------\n";
}

bool find(const vector <int> &number, int target){
    for(auto v:number)
        if(v==target)
            return true;
    return false;
}

void quit_program(){
    cout<<"Exiting the program..."<<endl;
    cout<<"Good Bye!!\n";
}
