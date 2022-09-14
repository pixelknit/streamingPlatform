//#define _GLIBCXX_USE_CXX11_ABI 0
#include "video.h"
#include <fstream>
#include <sstream>
#include <exception>
//#include </Users/felipepesantez/jsoncpp/include/json/value.h>
//#include </Users/felipepesantez/jsoncpp/include/json/json.h>
//#include <jsoncpp/json/value.h>
//#include <jsoncpp/json/json.h>


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
        Platform(std::string name):name(std::move(name)){}

        void ParseCsv(std::string fname);

        void GetPlatformInfo() const{
            std::cout << name << std::endl;
            for (const auto &x : videos){
                x->GetVideoInfo(); 
            }
        }

        //void GetJson(std::string fname);
        void Subscribe();
        void Unsubscribe();
        void AddVideo(Video* &video);
        void RemoveVideo();
        void FindMatch(std::string promt);
        
};


#endif
