//#define _GLIBCXX_USE_CXX11_ABI 0
#include "platform.h"
//#include "video.h"
/*
void Platform::GetJson(std::string fname){
    std::ifstream file(fname);
    Json::Value videos;
    Json::Reader reader;

    reader.parse(file, videos);

    std::cout << videos; 
    
}
*/

void Platform::AddVideo(Video* &video){
    videos.push_back(video);
    ++numberOfVideos;
}

void Platform::ParseCsv(std::string fname){
    std::ifstream inputFile;
    inputFile.open(fname);
    std::string line = "";
    //getline(inputFile, line);
    //line = "";

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
    
        Video* videolog = new Video(title, show_id, director, country, date_added, rating, duration, listed_in, release_year);
        //videos.push_back(videolog);
        AddVideo(videolog);

        line = "";

    } 


}

void Platform::FindMatch(std::string promt){
    for (const auto &vid : videos){
        if (vid->GetTitle() == promt){
            std::cout << "Video Found" << "\n";
            std::cout << "*****************" << "\n";
            vid->GetVideoInfo(); 
        } 
    }
}
