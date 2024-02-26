#include <iostream>
#include <iomanip>// used in line 119 & 254 to control the number of digits after decimal
#include <vector>
using namespace std;
int main() {
    ////////////////////////////////////////////////////////////
    //IF STATEMENT
    /////////////////////////////////////////////////////////////
//    int num{};
//    const int min{10};
//    const int max{100};
//    
//    cout<<"Enter a number between 10 and 100:";
//    cin>>num;
//    
//    if(num>=min){
//        cout<<"===================IF Statement-01================="<<endl;
//        cout<<num<<" is greater than "<<min<<endl;
//        int diff{num-min};
//        cout<<num<<" is "<<diff<<" greater than "<<min<<endl;
//    }
//    if(num<=max){
//        cout<<"===================IF Statement-02================="<<endl;
//        cout<<num<<" is less than "<<max<<endl;
//        int diff{max-num};
//        cout<<num<<" is "<<diff<<" less than "<<max<<endl;
//    }
//    
//    if(num>=min && num<=max){
//        cout<<"===================IF Statement-03================="<<endl;
//        cout<<num<<" is in the range."<<endl;
//        cout<<"In this case statement 1 & 2 will be displayed."<<endl;
//    }
    
//    if(num==min || num==max){
//        cout<<"===================IF Statement-04================="<<endl;
//        cout<<num<<" is on a boundary."<<endl;
//        cout<<"This means all 4 statements display."<<endl;
// 
//    }
/////////////////////////////////////////////////////////////////////////////////////
//else-if  Statemet
/////////////////////////////////////////////////////////////////////////////////////
//    const int target{10};
//    int num{};
//    
//    cout<<"Enter a number to compare with"<<target;
//    cin>>num;
//    if(num>=target){
//        cout<<num<<" is greater than "<<target<<endl;
//        int diff{num-target};
//        cout<<num<<" is "<<diff<<" greater than "<<target<<endl;
//    }else{
//        cout<<num<<" is less than "<<target<<endl;
//    }
//////////////////////////////////////////////////////////////////////////
//NESTED IF STATEMENT
//////////////////////////////////////////////////////////////////////////
//    int score{};
//    cout<<"Enter your score on the exam(0-100): ";
//    cin>>score;
//    char letter_grade{};
//    
//    if(score>0&&score<100){
//        if(score>=90)
//            letter_grade='A';
//        else if(score>=80)
//            letter_grade='B';
//        else if(score>=70)
//            letter_grade='C';   
//        else if(score>=60)
//            letter_grade='D';
//        else
//            letter_grade='F';
//    
//    cout<<"Your letter grade is: "<<letter_grade<<endl;
//    if(letter_grade=='F')
//        cout<<"Sorry you failed, you need to give a re-exam"<<endl;
//    else
//        cout<<"Congrats!!"<<endl;
//        
//            
//    }else
//        cout<<"Sorry "<<score<<" is wrong score input."<<endl;

//    int length{},width{},height{};
//    double base_cost{2.50};
//    
//    const int tier1_threshold{100};//volume
//    const int tier2_threshold{500};//volume
//    
//    int max_dimention_length{10};//inches
//    
//    double tier1_surcharge{0.10};//10% extra
//    double tier2_surcharge{0.25};//25% extra
//
////All dimetions must be 10 inches or less
//
//    int package_volume{};
//    cout<<"Welcome to the package cost calculator!"<<endl;
//    cout<<"Enter the package length, weight and height in inches seperated by space: ";
//    cin>>length>>width>>height;
//    
//    if(length>max_dimention_length || width>max_dimention_length || height>max_dimention_length){
//        cout<<"Sorry package dimention exceeds!"<<endl;
//    }else{
//        double package_cost{};
//        package_volume=length*width*height;
//        package_cost=base_cost;
//        
//        if(package_volume>tier2_threshold){
//           package_cost += package_cost*tier2_surcharge;
//           cout<<"Adding tier 2 surcharge"<<endl;
//        }else if(package_volume>tier1_threshold){
//            package_cost += package_cost*tier1_surcharge;
//            cout<<"Adding tier 1 surcharge"<<endl;
//        }
//        
//        cout<<fixed<<setprecision(2); //at the top #include <iomanip> is used to set the precision
//        cout<<"Your package volume is "<<package_volume<<endl;
//        cout<<"Your package will cost $"<<package_cost<<endl;
//    }
//////////////////////////////////////////////////////////////////////////////////
//Switch Statement
//////////////////////////////////////////////////////////////////////////////////
//    char letter_grade{};
//    cout<<"Please enter the letter grade you want:";
//    cin>>letter_grade;
//    
//    switch(letter_grade){
//        case 'a':
//        case 'A':
//            cout<<"You need to get 90 or above for A, study hard"<<endl;
//            break;
//        case 'b':
//        case 'B':
//            cout<<"You need to get 80 to 89"<<endl;
//            break;
//        case 'c':
//        case 'C':
//            cout<<"You need to get 70 to 80 for average grade"<<endl;
//            break;
//        case 'd':
//        case 'D':
//            cout<<"You should strive for a better grade, you need 60 to 69"<<endl;
//            break;
//        case 'f':
//        case 'F':
//        {
//            char confirm{};
//            cout<<"Confirm you want the F grade?(Y/N): ";
//            cin>>confirm;
//            if(confirm=='y'||confirm=='Y')
//                cout<<"Ok you did not study at all!!"<<endl;
//            else if(confirm=='n'||confirm=='N')
//                cout<<"Good go study"<<endl;
//            else
//                cout<<"Illegal chooice"<<endl;
//            break;
//        }
//            
//        default:
//            cout<<"You entered an invalid grade"<<endl;
//    }
//-----------------------Switch Enumeration Statement-----------------------/
    
//    enum Direction{
//        left,right,up,down
//    };
//    
//    Direction heading{left};
//    
//    switch(heading){
//        case left:
//            cout<<"<<== Goiunf left"<<endl;
//            break;
//        case right:
//            cout<<"Going right ==>>"<<endl;
//            break;
//        default:
//            cout<<"ok"<<endl;
//    }
////////////////////////////////////////////////////////////////////////////
//CONDITIONAL OPERATOR
///////////////////////////////////////////////////////////////////////////
//    int num{};
//    cout<<"Enter an integer: ";
//    cin>>num;
//    cout<<num<<" is a "<<((num%2==0)?"even number":"odd number")<<endl;
//    int num1{}, num2{};
//    cout<<"Enter two integers seperating by space: ";
//    cin>>num1>>num2;
//    
//    if(num1!=num2){
//        cout<<"Largest: "<<((num1>num2)?num1:num2)<<endl;
//        cout<<"Smallest: "<<((num1<num2)?num1:num2)<<endl;
//    }else
//        cout<<"Both the numbers are same"<<endl;
///////////////////////////////////////////////////////////////////////////////
//FOR LOOP
//////////////////////////////////////////////////////////////////////////////    
//    for(int i{1}; i<=10;i+=2)
//        cout<<i<<endl;

//    for(int i{10};i>0;--i)
//        cout<<i<<endl;
//    cout<<"Burstoff!!"<<endl;
//    for(int i {10}; i<=100; i+=10){
//        if(i % 15 == 0)
//            cout<<i<<endl;//30 60 90
//    }

//    for(int i{1},j{5}; i<=5; ++i,++j) //using the comma operator
//        cout<<i<<" + "<<j<<" = "<<(i+j)<<endl; 

//    for(int i{1};i<=100;++i){
//        cout<<i;
//        if(i%5 == 0)
//            cout<<endl;
//        else
//            cout<<" ";
//    }
//Same logic with conditional operator
//    for(int i{1};i<=100; ++i){
//        cout<< i <<((i%10==0)?"\n":" ");//no cout is required inside bracket
//    }

//    vector <int> nums{10,20,30,40,50};
//    for(unsigned i{0}; i<nums.size(); ++i)
//        cout<<nums[i]<<endl;

//    int sum{0};
//    for(int i{1}; i<=15; ++i){
//        if(i%2!=0)
//            sum+=i;
//    }
//    cout<<sum<<endl;
///////////////////////////////////////////////////////////////
//Range-Based For Loop
//////////////////////////////////////////////////////////////
//    int scores[] {10, 20, 30};
//    for(int score:scores)
//        cout<<score<<endl;;

//    vector<double> temperatures {80.7, 75.2, 81.5, 90.0};
//    double average_temp{};
//    double total{};
//    
//    for(auto temp:temperatures)
//        total+=temp;
//        
//    if(temperatures.size()!=0)
//        average_temp=total/temperatures.size();
//    cout<<fixed<<setprecision(1);
//    cout<<"Average temperature: "<<average_temp<<endl;

//    for(auto val:{1,2,3,4,5})
//        cout<<val<<endl;

//    for(auto c: "This is a test")
//        if(c != ' ')
//            cout<<c;

//    for(auto c: "This is a test")
//        if(c==' ')
//            cout<<"\t"; //for tab use \t
//        else
//            cout<<c;
/////////////////////////////////////////////////////////////////////
//While Loop
/////////////////////////////////////////////////////////////////////
//        
//    int num{};
//    cout<<"Enter a number greater than zero: ";
//    cin>>num;
//    
//    while(num>0){
//        cout<<num<<endl;
//        --num;
//    }
//    cout<<"Blastoff!"<<endl;
    
//    int num{};
//    cout<<"Enter a positive integer to count up to: ";
//    cin>>num;
//    
//    int i{1};
//    while(num>=i){
//        cout<<i<<endl;
//        ++i;
//    }
//    cout<<"Now what? go to home and sleep!!"<<endl;
//    int number{};
//    
//    cout<<"Enter a number less than 100: ";
//    cin>>number;
//    
//    while(number>=100){//!number<=100
//        cout<<"Number is out of range, enter again: ";
//        cin>>number;
//    }
//    cout<<"Congrats!"<<endl;
//    bool done{false};
//    int number{};
//    
//    while(!done){
//        cout<<"Enter a number between 1 and 5: ";
//        cin>>number;
//        if(number<=1||number>=5)
//            cout<<"Number out of range, try again."<<endl;
//        else{
//            cout<<"Thanks"<<endl;
//            done=true;// very important to terminate the loop
//        }
//    }
/////////////////////////////////////////////////////////////////////////////////
//do-while loop
////////////////////////////////////////////////////////////////////////////////
//    char selection{};
//    do{
//        cout<<"-----------------------------\n";
//        cout<<"1. Do this"<<endl;
//        cout<<"2. Do that"<<endl;
//        cout<<"3. Do something else"<<endl;
//        cout<<"Q. Quit"<<endl;
//        cout<<"\n Enter your slection:";
//        cin>>selection;
//        
//        switch(selection){
//            case '1': 
//            cout<<"Your code 1-doing this"<<endl;
//            break;
//            
//            case '2': 
//            cout<<"Your code 2-doing that"<<endl;
//            break;
//            
//            case '3': 
//            cout<<"Your code 3-doing something else"<<endl;
//            break;
//            //read with attention, cz you forgot how to do it, this two conditions for one output
//            case 'q':
//            case 'Q':
//            cout<<"Goodbye..";
//            break;
//            
//            
//            default: 
//            cout<<"You entered a wrong chsarscter try again"<<endl;
//        }
//    }while(selection!='q'&& selection!='Q');
/////////////////////////////////////////////////////////////////////////
//Infinite Loop
/////////////////////////////////////////////////////////////////////////
//for(;;)
//    cout<<"This will print forever"<<endl;
/////////////////////////////////////////////////////////////////////////
//Nested Loop
////////////////////////////////////////////////////////////////////////
//    for(int num1{1}; num1<=10; ++num1){
//        for(int num2{1}; num2<=10; ++num2){
//            cout<<num1<<"X"<<num2<<"="<<num1*num2<<endl;
//        }
//        cout<<"-------------------"<<endl;
//    }
//    cout<<endl;
////////////////////Histogram/////////////////////////
    
//    int num_elements{};
//    cout<<"How many elements do you need: ";
//    cin>>num_elements;
//    
//    vector<int>data{};
//    
//    for(int i{1}; i<=num_elements;++i){
//        int data_item{};
//        cout<<"Enter data no "<<i<<":";
//        cin>>data_item;
//        data.push_back(data_item);
//    }
//    
//    cout<<"\nDisplaying the histogram:"<<endl;
//    for(auto val:data){
//        for(int i{1}; i<=val; ++i){
//            if(i%5==0)
//                cout<<"*";
//            else
//                cout<<"-";
//        }
//        cout<<endl;
//    }
    
//    vector<int>vec {1,2,3};
//    int result{};
//    
//
//    for(unsigned i{}; i < vec.size(); ++i){
//        for(unsigned j=i+1; j < vec.size(); ++j){
//                result+=(vec[i]*vec[j]);
//                cout<<vec[i]<<"X"<<vec[j]<<"="<<vec[i]*vec[j]<<endl; 
//            }
//            
//    }
//    cout<<result<<endl;
///////////////////////////////////////////////////////////////////////////
//Section Chellange
//////////////////////////////////////////////////////////////////////////
    char selection{};
    vector<int>number {5,4,7,3,8};
    //vector<double>number{};
    cout<<number.size()<<endl;
    do{
        cout<<"P - Print numbers"<<endl;
        cout<<"A - Add a number"<<endl;
        cout<<"M - Display mean of the numbers"<<endl;
        cout<<"S - Display the smallest number"<<endl;
        cout<<"L - Display thelargest number"<<endl;
        cout<<"F - Find a number"<<endl;
        cout<<"Q - Quit"<<endl;
        
        cout<<"Enter your selection: ";
        cin>>selection;
        cout<<"------------------------------------------\n";
        switch(selection){
            case 'P':
            case 'p':
            {//print all the elements
                if(number.size()>0){
                    cout<<"[";
                    for(auto val:number){ //used range based for loop as on values to print on the console
                        cout<<val<<" ";
                    }
                    cout<<"]"<<endl; 
                }
                else{
                    cout<<"[]-the list is empty\a"<<endl;
                }                
            cout<<"---------------------------------------\n";
            }
            break;
            
            case 'a':
            case 'A':
            {//Add new int in the list
                double num{};
                cout<<"Enter the number you want to add: ";
                cin>>num;
                number.push_back(num);
                cout<<num<<" added."<<endl;
                cout<<"-------------------------------------\n";
            }
            break;
            
            case'm':
            case'M':
            {
                //Mean of the numbers
                double result{};
                double mean{};
                if(number.size()>0){
                    for(unsigned i{}; i<number.size(); ++i){
                        result+=number[i];
                    }
                    mean=result/number.size();
                    cout<<"The mean of the elements are: "<<mean<<endl;
                }else
                    cout<<"Unable to calculate the mean-No data.\a"<<endl;
                
                cout<<"------------------------------\n";
            }
            break;
            
            case's':
            case'S':
            {//Samllestnumber
                if(number.size()==0)
                    cout<<"Unabler to determine the samllest-lsit id empty"<<endl;
                else{
                    int smallest=number.at(0);
                    for(auto num:number){
                        if(num<smallest)
                            smallest=num;
                    }
                    cout<<"The smallest number is: "<<smallest<<endl;
                }
            }
            
            break;
            
            case 'l':
            case 'L':
            {
                //Largest Number
                
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
            break;
            
            //Search number
            case 'f':
            case 'F':
            {
            if(number.size()<1)
                cout<<"No number found- lsit is empty"<<endl;
                    
            else{
                double num_to_find{};
                cout<<"Enter the number you want to find: ";
                cin>>num_to_find;               
                for(auto num : number){
                    if(num == num_to_find)
                        cout<<num_to_find<<" is found in the list."<<endl;
                    else
                        cout<<"The number is not in the list"<<endl;
                    }
            }
                
            cout<<"-----------------------------------\n";
            }
            break;
            
            case'q':
            case'Q':
            cout<<"Goodbye..."<<endl;
            break;
            
            default:
                cout<<"Unknown selection, please try again\a"<<endl;
        }
        
    }while(selection!='q' && selection!='Q');
    
   
    
    return 0;
    }