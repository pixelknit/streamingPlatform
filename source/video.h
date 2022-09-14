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

        void GetVideoInfo(){
            std::cout << title << "\n";
            std::cout << show_id << "\n";
            std::cout << director << "\n";
            std::cout << country << "\n";
            std::cout << date_added << "\n";
            std::cout << rating << "\n";
            std::cout << duration << "\n";
            std::cout << listed_in << "\n";
            std::cout << release_year << "\n";
        }


};


#endif
