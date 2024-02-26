#include <iostream>
#include <string>

using namespace std;

class Player{
	public:
	std::string name;
	int health;
	int xp;
	
public:
	//Constructor deafult parameter is used 
	Player(std::string name_val = "None",
			int health_val = 0,
			int xp_val = 0);
			
	//Ambiguous Error
	//Player(); //--> compiler is confused which constructor to implement 
};

	
	// 03 Args constructor implemented
	Player::Player(std::string name_val, int health_val, int xp_val)
	:name{name_val}, health{health_val}, xp{xp_val}{
		cout<<"Three args constructor"<<endl;
	}

int main(){
	
	Player empty; //None, 0, 0
	Player frank{"Frank"}; //Hero, 0, 0 
	Player villain{"Villain", 100, 30};
	Player hero{"Hero", 80};// writing a 2 args constructor
	Player *enemy = new Player;
	delete Player;
	
	return 0;
}