#include "platform.h"

void Platform::GetCsvData(std::string fname){
    std::vector<std::vector<std::string>> content;
    std::vector<std::string> row;
    std::string line;
    std::string word;

    std::fstream file(fname, std::ios::in);

    if(file.is_open())
    {
        while(getline(file,line))
    {
    row.clear();

    std::stringstream str(line);

    while(getline(str, word, ','))
    row.push_back(word);
    content.push_back(row);
    }
    }
    else
    std::cout << "File error" << std::endl;
    
    for(int i=0; i<content.size();++i)
    {
    for(int j=0;j<content[i].size();++j)
    {
    std::cout << content[i][j] << std::endl;
    }
    
    }
}

void Platform::AddVideo(Video* &video){
    videos.push_back(video);
    ++numberOfVideos;
}

void Platform::csv(std::istream& str){
std::vector<std::string>   result;
    std::string                line;
    std::getline(str,line);

    std::stringstream          lineStream(line);
    std::string                cell;

    while(std::getline(lineStream,cell, ','))
    {
        result.push_back(cell);
    }
    // This checks for a trailing comma with no data after it.
    if (!lineStream && cell.empty())
    {
        // If there was a trailing comma then add an empty element.
        result.push_back("");
    }

    for (const auto &x: result){
        std::cout << x << "\n";
    }
}
