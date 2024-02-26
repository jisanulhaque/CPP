//Section 13
//Copy Constructor

#include <iostream>
#include <string>

using namespace std;

class Player{
	private:
	std::string name;
	int health;
	int xp;
	
	public:
	std::string get_name(){return name;}
	int get_health(){return health;}
	int get_xp(){return xp;}
	
	//Constructor deafult parameter is used 
	Player(std::string name_val = "None",
			int health_val = 0,
			int xp_val = 0);
	//Copy Constructor
	Player(const Player &source);
	//Destructor
	~Player(){cout<<"Destructor called for: " + name<<endl;}
			
};

	
	// 03 Args constructor implemented
	Player::Player(std::string name_val, int health_val, int xp_val)
	:name{name_val}, health{health_val}, xp{xp_val}{
		cout<<"Three args constructor used for " + name<<endl;
	}
	
	//Copy Constructor
	Player::Player(const Player &source)
		//:name{source.name}, health{source.health}, xp{source.xp}
		:Player{source.name, source.health, source.xp}{
			cout<<"Copy constructor: made a copy of: "<<source.name<<endl;
	}
	
	void display_player(Player p){
		cout<<"Name: "<<p.get_name()<<endl;
		cout<<"Health: "<<p.get_health()<<endl;
		cout<<"XP: "<<p.get_xp()<<endl;
	}
	
int main(){
	
	Player empty("xxxx", 100, 30);
	
	Player new_obj(empty);
	
	display_player(empty);
	
	Player frank{"Frank"}; //Hero, 0, 0 
	Player villain{"Villain", 100, 30};
	
	
	return 0;
}