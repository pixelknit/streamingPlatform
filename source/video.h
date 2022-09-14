//#define _GLIBCXX_USE_CXX11_ABI 0
#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>

#ifndef _VIDNET
#define _VIDNET

class Video{
    std::string title;
    std::string genre;
    std::string show_id;
    std::string director;
    std::string country;
    std::string date_added;
    std::string rating;
    std::string duration;
    std::string listed_in;
    int release_year;

    
    public:
        Video(
                std::string title,
                std::string show_id,
                std::string director,
                std::string country,
                std::string date_added,
                std::string rating,
                std::string duration,
                std::string listed_in,
                int release_year

                ):title(std::move(title)),
                show_id(std::move(show_id)),
                director(std::move(director)),
                country(std::move(country)),
                date_added(std::move(date_added)),
                rating(std::move(rating)),
                duration(std::move(duration)),
                listed_in(std::move(listed_in)),
                release_year(std::move(release_year))

        {}

        void GetVideoInfo() const{
            std::cout << "-----------------------" << "\n";
            std::cout << "Video title: " << title << "\n";
            std::cout << "Show id: " << show_id << "\n";
            std::cout << "Director: " << director << "\n";
            std::cout << "Country: " << country << "\n";
            std::cout << "Date added: " << date_added << "\n";
            std::cout << "Rating: " << rating << "\n";
            std::cout << "Duration:" << duration << "\n";
            std::cout << "Listed in: " << listed_in << "\n";
            std::cout << "Release year: " << release_year << "\n";
            std::cout << "-----------------------" << "\n";
        }
        
        std::string GetTitle() const{
            return title;
        }


};


#endif
