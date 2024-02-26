#include "Movie.h"
#include <string>

	
	
	//Constructor with movie name, rating and watch count	
	Movie::Movie(std::string name_val, std::string rating_val, int count_val)
		:name{name_val}, rating{rating_val}, count{count_val}{
			
	}
	
	//copy constructor
	Movie ::Movie(const Movie &source)
		:Movie{source.name, source.rating, source.count}{
		
	}
	
	//Destructor
	Movie::~Movie(){
		
	}
	
	//name setter
	void Movie::set_name(std::string name_val){name = name_val;}
	
	//ratting: G, PG, PG-13, R
	void Movie::set_rating(std::string rating_val){rating = rating_val;}
	
	//watched count: How many times the mopvie is watched
	void Movie::set_count(int count_val){watch_count += count_val;}
	
	std::string Movie::get_name() const{
		return name;
	}
	std::string Movie::get_rating() const{
		return rating;
	}
	int Movie::get_count() const{
		return count;
	}

	void Movie::increment_count(int n){
		++count;
	}
	
	void Movie::display() const{
		std::cout<<name<<","<<rating<<","<<count<<std::endl;
	}