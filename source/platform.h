#include "video.h"
#include <fstream>
#include <sstream>

#ifndef _PLT
#define _PLT

class Platform{
    std::string name;
    std::string type;
    std::string owner;
    std::vector<Video*> videos;

    public:
        Platform(std::string name):name(name){}

        void GetPlatformInfo() const; 

        void GetCsvData(const std::string fname);
};


#endif
