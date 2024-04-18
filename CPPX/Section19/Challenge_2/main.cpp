#include<iostream>
#include<fstream>
#include<iomanip>

using namespace std;

int main(){
    ifstream in_file;
    in_file.open("responses.txt");
    
    if(!in_file){
        cerr<<"Problem opening the file"<<endl;
        return 1;
    }else{
        string ans_key, answer, name;
        int  total_student{0};
        double total_score{0};
        cout<<setw(15)<<left<<"Name"<<setw(5)<<"Score"<<endl;
        cout<<"--------------------------"<<endl;
        in_file>>ans_key;
        //cout<<ans_key<<endl;
        while(in_file>>name>>answer){
            int score=0;
            for(int i=0; i<ans_key.length(); i++){
                if(ans_key[i]==answer[i])
                    score++;
            }
            cout<<setw(15)<<left<<name<<setw(5)<<score<<endl;
            
           total_score+=score;
            total_student++;
        }
        //cout<<total_score<<endl;
        //cout<<total_student<<endl;
        cout<<"--------------------------"<<endl;
        cout<<"Average Score: "<<total_score/total_student<<endl;
    }
    
    in_file.close();
    return 0;
}