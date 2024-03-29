// Section 19
// Challenge 1
// Formatting output
#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

using namespace std;

struct City {
    std::string name;
    long population;
    double cost;
};

// Assume each country has at least 1 city
struct Country {
    std::string name;
    std::vector<City> cities;
};

struct Tours {
    std::string title;
    std::vector<Country> countries;
};

void ruler(){
    string a {"0123456789"};
    for(int i{0}; i < 6; i++)
        cout<<a;
    cout<<endl;
    cout<<endl;
}

int main()
{
    Tours tours
        { "Tour Ticket Prices from Miami",
            {
                {
                    "Colombia", { 
                        { "Bogota", 8778000, 400.98 },
                        { "Cali", 2401000, 424.12 },
                        { "Medellin", 2464000, 350.98 },
                        { "Cartagena", 972000, 345.34 } 
                    },
                },
                {
                    "Brazil", { 
                        { "Rio De Janiero", 13500000, 567.45 },
                        { "Sao Paulo", 11310000, 975.45 },
                        { "Salvador", 18234000, 855.99 }
                    },
                },
                {
                    "Chile", { 
                        { "Valdivia", 260000, 569.12 }, 
                        { "Santiago", 7040000, 520.00 }
                },
            },
                { "Argentina", { 
                    { "Buenos Aires", 3010000, 723.77 } 
                } 
            },
        }
    };

    int total_width =60;

    // Unformatted display so you can see how to access the vector elements
    ruler(); //Ruler for reference
   int title_len = tours.title.length();
    std::cout <<setw((total_width-title_len)/2)<<""<< tours.title << std::endl;
    cout<<endl;     

    cout<<"|"<<setw(14)<<left<<"Country"
        <<"|"<<setw(14)<<left<<"City"
        <<"|"<<setw(14)<<left<<"Population"
        <<"|"<<setw(14)<<left<<"Cost"<<"|"<<endl;


    
    cout<<setw(total_width)<<setfill('-')<<""<<endl;//make a line according to the total width 
    
    cout<<setfill(' ');
    cout<<setprecision(2)<<fixed;


    for(auto country : tours.countries) {   // loop through the countries
        for(size_t i =0; i< country.cities.size(); i++) {       
            std::cout   <<"|"<<setw(14)<<left<<(i==0 ? country.name:"") 
                        /*
                        *when i= 0, print country.name else print ""
                        *i=0 comes ones in the loop so after printing country name the 
                        further loop continues and prints the cities
                        */
                        <<"|"<<setw(14)<<left<< country.cities[i].name 
                          <<"|"<<setw(14)<<right<< country.cities[i].population 
                          <<"|"<<setw(14)<<right<< country.cities[i].cost 
                          <<"|"<< std::endl;
            
           }
                                     
        }
        
    std::cout << std::endl << std::endl;
    return 0;
}