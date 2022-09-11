#define _GLIBCXX_USE_CXX11_ABI 0
#include "platform.h"

void Platform::GetJson(std::string fname){
    Json::Value videos;
    std::ifstream people_file(fname, std::ifstream::binary);
    people_file >> videos;

    std::cout << videos; 
    
}

void Platform::AddVideo(Video* &video){
    videos.push_back(video);
    ++numberOfVideos;
}

