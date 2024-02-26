//Section 11
//Default Argument

#include <iostream>
#include <iomanip>
#include <string>


using namespace std;
double calc_cost(double base_cost=100, double tax_rate=0.06, double shipping=3.50); //default arguments are added only in the prototype
void greetings(string name, string prefix="Mr.", string suffix="");


double calc_cost(double base_cost, double tax_rate, double shipping){
    return base_cost+=(base_cost*tax_rate)+shipping;
}

void greetings(string name, string prefix, string suffix){
    cout<<"Hello "<<prefix+" "+ name + " " + suffix<<endl; 
}



int main() {
    double cost{};
    cost=calc_cost(100.0, 0.08, 4.25); //we will use no defaults
    
    cout<<fixed<<setprecision(2);
    cout<<"Cost is "<<cost<<endl;
    
    cost=calc_cost(100.0, 0.08); //we will use default shipping
    cout<<"Cost is "<<cost<<endl;
    
    cost=calc_cost(200.0);
    cout<<"Cost is "<<cost<<endl; // will use tax and shipping
    
    cost=calc_cost();
    cout<<"Cost is "<<cost<<endl;
    
    greetings("Jisan","Snr Dev", "CEO");
    greetings("Johans");
    
    return 0;
    }