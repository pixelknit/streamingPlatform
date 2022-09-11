#include "platform.h"

void Platform::GetPlatformInfo() const{
    std::cout << name << std::endl;
}
void GetCsvData(const std::string fname){
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
