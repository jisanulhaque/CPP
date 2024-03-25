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

    

    // Unformatted display so you can see how to access the vector elements
    ruler(); //Ruler for reference
    std::cout <<setw(15)<<" "<< tours.title << std::endl;
    cout<<endl;

    cout<<"|"<<setw(14)<<left<<"Country"
        <<"|"<<setw(14)<<left<<"City"
        <<"|"<<setw(14)<<left<<"Population"
        <<"|"<<setw(14)<<left<<"Cost"<<"|"<<endl;


    
    cout<<"-------------------------------------------------------------"<<endl;
    
    for(auto country : tours.countries) {   // loop through the countries
        std::cout <<"|"<<setw(14)<<left<< country.name;
        int len = country.cities.size();
        int i {0};
        for(auto city : country.cities) {       // loop through the cities for each country
            std::cout <<"|"<<setw(14)<<left<< city.name 
                          <<"|"<<setw(14)<<right<< city.population 
                          <<"|"<<setw(14)<<right<< city.cost 
                          <<"|"<< std::endl;
            
            if(i < (len-1)){
                cout<<"|"<<setw(15);   
                i++;
                //cout<<i;
           }
           
                          
        }
        
    }

    std::cout << std::endl << std::endl;
    return 0;
}