#include "platform.h"

int main(){

    Video* vid1 = new Video("test","genre",2);
    Video* vid2 = new Video("test2","genre2",1);

    Platform* plt1 = new Platform("Netflix");

    plt1->AddVideo(vid1);
    plt1->AddVideo(vid2);
    plt1->GetPlatformInfo();

    return 0;
}
