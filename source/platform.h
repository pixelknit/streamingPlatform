#define _GLIBCXX_USE_CXX11_ABI 0
#include "video.h"
#include <fstream>
#include <sstream>

#ifndef _PLT
#define _PLT

class Platform{
    std::string name;
    std::string type;
    std::string owner;
    std::string show_id;
    std::string title;
    
    int numberOfUsers = 0;
    int numberOfVideos = 0;

    std::vector<Video*> videos;

    public:
        Platform(std::string name):name(name){}

        //constexpr void GetPlatformInfo() const; 
constexpr void GetPlatformInfo() const{
    std::cout << name << std::endl;
    for (auto x:videos){
        x->GetVideoInfo(); 
    }
}

        void GetCsvData(std::string fname);
        void Subscribe();
        void Unsubscribe();
        void AddVideo(Video* &video);
        void RemoveVideo();
        void csv(std::istream& str); 
        
};


#endif
