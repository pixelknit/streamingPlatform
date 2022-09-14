#include "source/platform.h"

int main(){

    //Json::Value test;

    //Video* vid1 = new Video("test_title","s23", "Felipe Director", "UK", "somedate", "good", "123","serieslist",2022);
    //Video* vid2 = new Video("test2","genre2",1);

    Platform* plt1 = new Platform("Netflix");

    //plt1->AddVideo(vid1);
    //plt1->AddVideo(vid2);
    plt1->ParseCsv("netflix.csv");
    plt1->GetPlatformInfo();
    //plt1->GetJson("source/netflix.json");

    return 0;
}
