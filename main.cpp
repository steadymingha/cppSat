#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <chrono>
#include "Setup.hpp"
#include <filesystem>
//"C:/Users/mhlee/Desktop/Work/OrbitData/TimeTab/TIMETAB.DAT"
//void get_item_list(std::string& item_list)
//{
//    static uint8_t i = 0;
//
//    if (lines_[i].empty()) item_list.clear();
//    else if (lines_[i][0] == '#') item_list.clear();
//    else if(i < lines_.size())
//    {
//        item_list = lines_[i++];
//    }
//    else
//    {
//
//
//        item_list.clear();
//    }
//}
int main()
{
    std::ifstream file("../Data/TimeTab/TIMETAB.DAT");
    std::vector<std::string> lines;
    std::string line;
    std::filesystem::path cwd = std::filesystem::current_path();
    std::cout << "cwd: " << cwd << std::endl;

    if (file.is_open())
    {
        std::stringstream buffer;
        buffer << file.rdbuf();

        while(std::getline(buffer, line)) 
        {
            lines.push_back(line);
        }
    file.close();
    }
    int size_vec = lines.size();
    std::cout << lines[2] << std::endl;
    while(1)
    {


    }





    // std::cout << "The size of int is: " << sizeof(int) << " bytes." << std::endl;
    return 0;


}
