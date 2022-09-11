#include "platform.h"

int main(){

    Platform* plt1 = new Platform("Netflix");
    plt1->GetPlatformInfo();
    const std::string file="netflix.csv"; 
    plt1->GetCsvData(file);

    return 0;
}
