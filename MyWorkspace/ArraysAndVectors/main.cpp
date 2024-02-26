#include <iostream>
using namespace std;

int main() {
    /////////////////////////////////////////////////////////
    //Arrays
    ////////////////////////////////////////////////////////
    
//    char vowel [] {'a','e','i','o','u'};
//    cout<<"The first vowel is: "<<vowel[0]<<endl;
//    cout<<"The last vowel is: "<<vowel[4]<<endl;
////    cin>>vowel[5]; //suppose to be out of bound but it worked in y system
//    cout<<vowel[5]<<endl;// In array it will not check the bounds, it will just print the element stored in the memory
    

//    double hi_temps[]{90.1, 98.2, 99.3, 95.4,96.8};
//    cout<<"The first temp of the element is: "<<hi_temps[0]<<endl;
//    hi_temps[0]=10.7; //Assigning a value to and array index to overwrite the existing element
//    cout<<"Now the first temp is: "<<hi_temps[0]<<endl;
//    
//    int test_score[5]{100};//this curly brackets will make all the array elements to 0 as it is intialized
//    
//    cout<<test_score[0]<<endl;
//    cout<<test_score[1]<<endl;
//    cout<<test_score[2]<<endl;
//    cout<<test_score[3]<<endl;
//    cout<<test_score[4]<<endl;
/////////////////////////////////////////////////////
//Multidimentional Array
/////////////////////////////////////////////////////
//    int movie_rating[3][4]
//    {
//        {1,3,4,5},
//        {2,4,4,5},
//        {3,4,5,1}
//    };
//        
//    cout<<movie_rating[1][3]<<endl; 
//////////////////////////////////////////
//Areithmetic Operators
//////////////////////////////////////////
//    int num1 {12};
//    int num2{10};
//    
//    cout<<num1<<"+"<<num2<<"="<<num1+num2<<endl;
//    num1=100;// does not change the value of num1 in the above output statement
//    num2=200;
//    int result {0};
//    result=num1+num2;
//    cout<<num1<<" + "<<num2<<" = "<<result<<endl;
//    result=num2/num1;
//    cout<<num2<<" / "<<num1<<" = "<<result<<endl;
//    
//    cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
//    
//    cout<<num1<<" % "<<num2<<" = "<<num1%num2<<endl;
//    
//    double num3 {10.2};
//    double num4 {5.2};
//    
//    
//    cout<<num3/num4<<endl; 

//    const double euro_per_dollar {1.07};
//    
//    cout<<"Welcome to Jisan's euro to dollar convertor"<<endl;
//    double euro {0.0};
//    cout<<"Enter amount of euros: ";
//    cin>>euro;
//    double dollar {0.0};
//    dollar=euro*euro_per_dollar;
//    cout<<euro<<" euros are equivalent to "<<dollar<<" dollars\n\a";
/////////////////////////////////////////////////////////////////////
//Operators
/////////////////////////////////////////////////////////////////
//    int counter {10};
//    int result{0};
    //Prefix increment
//    cout<<counter<<endl;
//    result=++counter;
//    cout<<counter<<endl;
//    cout<< result<<endl;
    
    //Postfix increment
//    
//    cout<<"=================="<<endl;
//    cout<<counter<<endl;//10
//    result=counter++;//11
//    cout<<counter<<endl;//10
//    cout<<result<<endl;
    
   //Exercise4
//    counter=10;
//    result=0;
    //Pre Increment
//    cout<<counter<<endl; //10
//    result=++counter+10;
//    cout<<counter<<endl;//11
//    cout<<result<<endl;//21
    //Post Incremnet
    
//    cout<<counter<<endl;//10
//    result=counter++ +10;
//    cout<<counter<<endl;//10+1=11
//    cout<<result<<endl;//10+10=20
    int *num{nullptr};
    cout<<num<<endl;
    cout<<sizeof num<<endl;
    cout<<&num<<endl;
    num=nullptr;
    cout<<num<<endl;



    return 0;
    }