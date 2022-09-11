#define _GLIBCXX_USE_CXX11_ABI 0
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

    size_t id;
    
    public:
        Video(std::string title, std::string genre, size_t id):title(std::move(title)),genre(std::move(genre)), id(std::move(id)){}

        void GetVideoInfo() const{
            std::cout << title << std::endl;
        }


};


#endif
