#ifndef _MOVIES_H_
#define _MOVIES_H_

#include <string>
#include <vector>
#include "Movie.h"


//Collection of movie class
class Movies{
private:
	std::vector <Movie> movies;
public:
	Movies();
	~Movies();
	
	bool add_movies(std::string name, std::string rating, int count);
	
	bool increment_count(std::string name);
	
	void display() const;
	
};


#endif //_MOVIES_H_