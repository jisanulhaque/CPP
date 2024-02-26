#include <iostream>
#include <cctype> //for character based functions
#include <cstring> //for c-style string functions
#include <string>

using namespace std;

int main() {
//    char first_name[20] {};
//    char last_name[20] {};
//    char full_name[50] {};
//    char temp[50] {};
    
   // cout<<first_name; //will show garbage
//    cout<<"Please enter your first name: ";
//    cin>>first_name;
//    
//    cout<<"Please enter your Last name: ";
//    cin>>last_name;
//    
//    cout<<"Hello "<<first_name<<" your first name has "<<strlen(first_name)<<" characters."<<endl;
//    cout<<"Your last name is "<<last_name<< " has "<<strlen(last_name)<<" characters."<<endl;
//    
//    strcpy(full_name, first_name); //copy first_name to full_name
//    strcat(full_name, " "); //concatenate a whitespace to full_name
//    strcat(full_name, last_name); //concatenate last_name to full_name
//    cout<<"Your full name is: "<<full_name<<endl;
//    
//    cout<<"Enter your full name: ";
//    cin>>full_name;
//    
//    cout<<"Your full name is: "<<full_name<<endl;

//    cout<<"Enter your full name: ";
//    cin.getline(full_name, 50); //It will read upto 50 characters or when we press enter 
//    //cout<<full_name;
//    
//    strcpy(temp, full_name);
//    if(strcmp(temp, full_name)==0)
//        cout<<temp<<" and "<<full_name<<" are same."<<endl;
//    else
//        cout<<temp<<" and "<<full_name<<" are not smae."<<endl;
//        
//    for(size_t i{0}; i<strlen(full_name); ++i){
//        if(isalpha(full_name[i]))
//            full_name[i]=toupper(full_name[i]);
//    }
//    cout<<"Your full name is: "<<full_name<<endl;
//    
//    if(strcmp(temp, full_name)==0)
//        cout<<temp<<" and "<<full_name<<" are same."<<endl;
//    else
//        cout<<temp<<" and "<<full_name<<" are different."<<endl;
/////////////////////////////////////////////////////////////////////////////////
//C++ Strings
////////////////////////////////////////////////////////////////////////////////
//    string s0; 
//    string s1{"Apple"};
//    string s2{"Banana"};
//    string s3{"Kiwi"};
//    string s4{"apple"};
//    string s5 {s1}; //Apple
//    string s6{s1, 0,3}; //App
//    string s7(10, 'X'); //XXXXXXXXXX
    
//    cout<<s0<<endl; //empty string
//    cout<<s0.length();

//    cout<<s1<<endl;
//    cout<<s2<<endl;
//    cout<<s3<<endl;
//    cout<<s4<<endl;
//    cout<<s5<<endl;
//    cout<<s6<<endl;
//    cout<<s7<<endl;

    //Comparison
//    cout<<boolalpha;
//    cout<<s1<<"=="<<s5<<":"<<(s1==s5)<<endl; //True
//    cout<<s1<<"=="<<s2<<":"<<(s1==s2)<<endl;//False
//    cout<<s1<<"!="<<s2<<":"<<(s1!=s5)<<endl; //True
//    cout<<s1<<"<"<<s2<<":"<<(s1<s2)<<endl; //True Apple < Banana
//    cout<<s4<<"<"<<s5<<":"<<(s4<s5)<<endl;
//    cout<<s1<<"=="<<"Apple"<<":"<<(s1=="Apple")<<endl; //Comparing C++ string and C-style string
//    cout<<s1<<"+"<<s2<<":"<<(s1+", "+s2)<<endl; /concatenation
    
    //Assignment
//    s1 = "Watermelon";
//    cout<<"s1 is now: "<<s1<<endl; //Watermelon
//    
//    s2=s1;
//    cout<<"s2 is now: "<<s2<<endl; //Watermelon
//    
//    s3="Frank";
//    cout<<"s3 is now "<<s3<<endl;
//    
//    s3[0]='C';
//    cout<<"s3 first letter to C: "<<s3<<endl; //Crank
//    s3.erase(3,1);
//    s3.at(3)='s';
//    s3+='h';
//    cout<<s3<<endl;
//    s3.clear();
//    cout<<s3<<endl;

    //Concatenation
//    s3="Watermelon";
//    cout<<s3<<endl;
//    s3 = s1 + " and " + s2 + " juice.";
//    cout<<s3<<endl;
    
    //s3 = "Cold "+" hot "+ s2 + " juice"; //Compiller error
    
    //Loop
    
//    string s1 ="Apple";
//    for(size_t i{0}; i < s1.length(); ++i)
//        cout<<s1.at(i)<<endl;
//    
//    for(auto c:s1)
//        cout<<c;
//    cout<<endl;

    //Substring
//    string s1="This is a test.";
//    
//    cout<<s1.substr(0, 4)<<endl;
//    cout<<s1.substr(5, 2)<<endl;
//    cout<<s1.substr(10, 4)<<endl;

    //Erase
    
//    string s1="This is a test";
//    s1.erase(0, 5);
//    cout<<s1<<endl;

    //getline
    
//    string full_name{};
//    
//    cout<<"Enter your full_name: ";
//    getline(cin, full_name);
//    
//    cout<<full_name<<endl;

    //Find
    
//    string s1 = "The secret word is Boo.";
//    
//    string word{};
//    cout<<"Enter the word to find:";
//    cin>>word;
//    
//    size_t position = s1.find(word);
//    
//    if(position != string::npos)
//        cout<<"Your word "<<word<<" is found at position "<<position<<endl;
//    else
//        cout<<"Your word is not in here"<<endl;

///////////////////////////////////////////////////////////////////////////////
//Section Chellange
//////////////////////////////////////////////////////////////////////////////

//    string alphabet{"* abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
//    string key{" *qwertyuiopasdfghjklzxcvbnmMNBVCXZLKJHGFDSAPOIUYTREWQ"};
//    string encripted_msg{}, decripted_msg{};
//    
//    string message{};
//    cout<<"Enter you message to encrip: ";
//    getline(cin, message);
//    
//    //cout<<key.size()<<endl; 
//    //cout<<alphabet.size()<<endl;
//    //Refined!!
//    for(size_t i{};i<message.size(); ++i){
//        if(alphabet.find(message[i]) != string::npos)
//            encripted_msg+= key[alphabet.find(message[i])]; //think the logic inner part to outter
//        else
//            encripted_msg+=message[i];
//        
//        if(key.find(encripted_msg[i]) != string::npos)
//            decripted_msg+= alphabet[key.find(encripted_msg[i])];
//        else
//            decripted_msg+=encripted_msg[i];
//   }    
//    cout<<"Encripting message..."<<endl;
//    cout<<encripted_msg<<endl;
//    cout<<"=================================\n";
//    cout<<"Decripting the message..."<<endl;
//    cout<<decripted_msg<<endl;
////////////////////////////////////////////////////////
//Pyramid Problem
///////////////////////////////////////////////////////////
//    int rows{};
//    cout<<"Enter the number of rows: ";
//    cin>>rows;
//    
//    for(int i=rows; i>0; --i){
//        for(int j = i; j>0; --j){
//            cout<<j;
//        }
//        cout<<"\n";
//    }

////////////////ALternative Solution with string function//////////////
//    string num, print;
//    cout<<"Enter the string: ";
//    getline(cin, num);
//    
//    for(unsigned i =1; i<=num.size(); ++i){
//        print = num.substr(0, i); //substr method is working as another loop in this solution
//        cout<<print<<endl;
//    }
////////////////////////////////////////////////////////////////

    string pyramid{};
    cout<<"Enter the string: ";
    getline(cin, pyramid);
    
    unsigned n = pyramid.length();
    
    for(unsigned i=1,j=n; i<=n; ++i,j=n){
        //for(unsigned j=n; j>i; --j) //this for loop produces the same result
        while(j!=i){ //for spacing
            cout<<" ";
            --j;
        }   
        string print{pyramid, 0, i}; //First part of the line
        cout<<print;
        
        for(int k =print.size()-2; k>=0; --k){ //for reversed string
            string print1;
            print1+=print[k];
            cout<<print1;
        }
        
        cout<<endl;
    }
///////////////////////////////////////////////////////////////////////////////////
//Instructor's Solution
///////////////////////////////////////////////////////////////////////////////////
    string letters{};

    cout << "Enter a string of letters so I can create a Letter Pyramid from it: ";
    getline(cin, letters);

    size_t num_letters = letters.length();

    int position {0};

    // for each letter in the string
    for (char c: letters) {

        size_t num_spaces = num_letters - position;
        while (num_spaces > 0) {
            cout << " ";
            --num_spaces;
        }

        // Display in order up to the current character
        for (size_t j=0; j < position; j++) {
            cout << letters.at(j);
        }

        // Display the current 'center' character
        cout << c;

        // Display the remaining characters in reverse order
        for (int j=position-1; j >=0; --j) {
            // You can use this line to get rid of the size_t vs int warning if you want
            auto k = static_cast<size_t>(j);
            cout << letters.at(k);
        }

        cout << endl; // Don't forget the end line
        ++position;
    }




    return 0;
    }