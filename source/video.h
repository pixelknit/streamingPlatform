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
    size_t id;
    
    public:
        Video(std::string title, std::string genre, size_t id):title(title),genre(genre), id(id){}

        void GetVideoInfo() const{
            std::cout << title << std::endl;
        }
};


#endif
