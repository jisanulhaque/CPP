#ifndef _MOVIE_H_
#define _MOVIE_H_
#include <string>


class Movie{
private:
	std:: string name;
	std::string rating;
	int count;
	
public:
	
//	//Constructor with movie name, rating and watch count	
	Movie(std::string name_val, std::string rating_val, int count_val);
	
	//Copy Constructor
	Movie(const Movie &source);
	
	//Destructor
	~Movie();
	
	//name setter
	void set_name(std::string name_val);
	
	//ratting: G, PG, PG-13, R
	void set_rating(std::string rating_val);
	
	//watched count: How many times the mopvie is watched
	void set_count(int count_val);
	
	std::string get_name() const;
	std::string get_rating() const;
	int get_watch_count() const;

	void increment_count();
	
	void display() const;
	
};



#endif //_MOVIE_H_
