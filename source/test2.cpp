#include <iostream>
#include <string>
#include <fstream>
#include <sstream>
#include <vector>


int main()
{
    std::ifstream inputFile;
    inputFile.open("netflix.csv");

    std::string line = "";
    getline(inputFile, line);
    line = "";

    while (getline(inputFile, line)){
        std::string show_id;
        std::string type;
        std::string title;
        std::string director; 
        std::string country;
        std::string date_added;
        int release_year;
        std::string rating;
        std::string duration;
        std::string listed_in;

        std::string tempString = "";

        std::stringstream inputString(line);

        getline(inputString, show_id, ',');
        getline(inputString, type, ',');
        getline(inputString, title, ',');
        getline(inputString, director, ',');
        getline(inputString, country, ',');
        getline(inputString, date_added, ',');

        getline(inputString, tempString, ',');
        release_year = atoi(tempString.c_str());

        getline(inputString, rating, ',');
        getline(inputString, duration, ',');
        getline(inputString, listed_in, ',');
        

        line = "";



    }
    
    return 0;
}

