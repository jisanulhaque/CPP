#include <iostream>
#include <vector>//don't forget to add this

using namespace std;

int main() {
//    vector <char> vowels; //Empty vector
//    vector<char>vowels(5);//5 initialized to 0
//    vector<char>vowels {'a','e','i','o','u'};
//    cout<<vowels[0]<<endl;
//    cout<<vowels[4]<<endl;
//    cout<<vowels[5]<<endl;//if subscrition operator is used, the there will be no bounds check
//    vector<int>test_scores{3};//3 elements all initialized to 0
//    vector<int>test_scores{3,100};//3 elements all initialized to 100
//    vector<int>test_scores{100, 98, 89};
//    cout<<"\nUsing the array syntax:"<<endl;
//    cout<<test_scores[0]<<endl;
//    cout<<test_scores[1]<<endl;
//    cout<<test_scores[2]<<endl;
//    
//    cout<<"\nUsing the vector syntax:"<<endl;
//    cout<<test_scores.at(0)<<endl;
//    cout<<test_scores.at(1)<<endl;
//    cout<<test_scores.at(2)<<endl;
//    cout<<"The size og the vector is "<<test_scores.size()<<endl;
//    
//    cin>>test_scores.at(0);
//    cin>>test_scores.at(1);
//    cin>>test_scores.at(2);
//    cout<<"The changed values are: \n";
//    cout<<test_scores.at(0)<<endl;
//    cout<<test_scores.at(1)<<endl;
//    cout<<test_scores.at(2)<<endl;
    
//    int score_to_add{0};
//    cout<<"Add a score in the vector: "<<endl;
//    cin>>score_to_add;
//    test_scores.push_back(score_to_add);
//    cout<<"Add another score to the vector: ";
//    cin>>score_to_add;
//    test_scores.push_back(score_to_add);
//    
//    cout<<"The changed values are: \n";
//    cout<<test_scores.at(0)<<endl;
//    cout<<test_scores.at(1)<<endl;
//    cout<<test_scores.at(2)<<endl;
//    cout<<test_scores.at(3)<<endl;
//    cout<<test_scores.at(4)<<endl;
//    cout<<"There are "<<test_scores.size()<<" scores in the vector"<<endl;
    
//    cout<<"This will cause an exception: "<<test_scores.at(10)<<endl;
/////////////////Examples of 2D Vectors//////////////////////////////

//        vector<vector<int>> movie_ratings
//        {
//            {1,2,4,5},
//            {1,5,4,4},
//            {2,3,5,4}
//            };
//            
//    cout<<"\nHere is the movie ratings for reviewer-1 using array syntax: "<<endl;
//    cout<<movie_ratings[0][0]<<endl;
//    cout<<movie_ratings[0][1]<<endl;
//    cout<<movie_ratings[0][2]<<endl;
//    cout<<movie_ratings[0][3]<<endl;
//
//    cout<<"\nHere is the movie ratings for reviewer-1 using vector syntax: "<<endl;    
//    cout<<movie_ratings.at(0).at(0)<<endl;//1
//    cout<<movie_ratings.at(0).at(1)<<endl;//2
//    cout<<movie_ratings.at(0).at(2)<<endl;//4
//    cout<<movie_ratings.at(0).at(3)<<endl;//5
/******************************************
 * SECTION 7 CHELLANGE 
 *****************************************/

    vector<int>vector1;
    vector<int>vector2;
    
    vector1.push_back(10);
    vector1.push_back(20);
    
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;
    cout<<"The size of the vector-1 is "<<vector1.size()<<endl;
    
    vector2.push_back(100);
    vector2.push_back(200);
    cout<<vector2.at(0)<<endl;
    cout<<vector2.at(1)<<endl;
    cout<<"The size of the vector-2 is "<<vector2.size()<<endl;
    
    vector<vector<int>>vector_2d;
    vector_2d.push_back(vector1);
    vector_2d.push_back(vector2);
    
    cout<<vector_2d.at(0).at(0)<<endl;//10
    cout<<vector_2d.at(0).at(1)<<endl;//
    cout<<vector_2d.at(1).at(0)<<endl;
    cout<<vector_2d.at(1).at(1)<<endl;
    
    vector1.at(0)=1000;
    cout<<"The elements of vector_2d are: \n";
    cout<<vector_2d.at(0).at(0)<<endl;//10
    cout<<vector_2d.at(0).at(1)<<endl;//
    cout<<vector_2d.at(1).at(0)<<endl;
    cout<<vector_2d.at(1).at(1)<<endl;
    
    cout<<"The elements of vector1: \n";
    cout<<vector1.at(0)<<endl;
    cout<<vector1.at(1)<<endl;  
    
    
    
    return 0;
    }