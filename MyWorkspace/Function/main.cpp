#include <iostream>
#include <cmath>// required for matematical calculation 
#include <cstdlib> //for using rand & srand
#include <ctime> //required for time

using namespace std;
////FUnction Prototypes//
//double calc_area_circle(double);//not mentioned the name of the parameter, still works just fine
//double calc_volume_cylinder(double radious, double height);
//void area_circle();
//void volume_cylinder();

//const double pi {3.14159};



int main() {
    
    double num{};
    cout<<"Enter a number: ";
    cin>>num;
    
//    cout<<"The sqrt of "<<num<<" is: "<<sqrt(num)<<endl;
//    cout<<"The cubed root of "<<num<<" is: "<<cbrt(num)<<endl;
//    cout<<"The sin of "<<num<<" is: "<<sin(num)<<endl;
//    cout<<"The cos of "<<num<<" is: "<<cos(num)<<endl;
//    
//    cout<<"The ceil of "<<num<<" is: "<<ceil(num)<<endl;
//    cout<<"The floor of "<<num<<" is: "<<floor(num)<<endl;
//    cout<<"The round of this "<<num<<" is: "<<round(num)<<endl;
//    
//    double power{};
//    cout<<"\nEnter a power to raise: ";
//    cin>>power;
//    
//    cout<<num<<" raised to the "<<power<<" is: "<<pow(num,power)<<endl;
//////////////////////////////////////////////////////////////////////////////////
//Rand & Srand
//////////////////////////////////////////////////////////////////////////////////

//    int random_number{};
//    size_t count{5}; //number of random numbers to generate
//    int min{1};
//    int max{6};
    
    //seed the random number generator
    //If you don't seed the generator you will get the same sequence random number at every run
    
//    cout<<"RAND_MAX on my system is: "<<RAND_MAX<<endl;
//    srand(time(nullptr));
//    
//    for(size_t i{1}; i<count; ++i){
//        random_number = rand()% max + min; //to generate a random number min to max
//        cout<<random_number<<endl;
//    }
//    
//    cout<<endl;
/////////////////////////////////////////////////////////////////////
//Implementing Fuction
///////////////////////////////////////////////////////////////////////
// The functions are called here and defined outside the main()

//area_circle();
//volume_cylinder();
//    
cout<<"Working"<<endl;

return 0;
}


//    
//double calc_area_circle(double radious){
//    return pi*radious*radious;
//}
//
//double calc_volume_cylinder(double radious, double height){
//    //return pi*radious*radious*height;
//    return calc_area_circle(radious)*height;
//}
//
//void area_circle(){
//    double radious{};
//    cout<<"\nEnter the radious of the circle: ";
//    cin>>radious;
//    cout<<"The area of the circle with radious "<<radious<<" is: "<<calc_area_circle(radious)<<endl;
//}
//
//void volume_cylinder(){
//    double radious{};
//    double height{};
//    
//    cout<<"\nENter the radious of the cylinder: ";
//    cin>>radious;
//    cout<<"\nEnter the height of the cylinder: ";
//    cin>>height;
//    cout<<"The volume of the cylinder with radious "<<radious<<" and height "<<height<<" is: "<<calc_volume_cylinder(radious, height)<<endl;
//}
