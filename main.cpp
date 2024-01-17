#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <chrono>
#include "Setup.hpp"

//"C:/Users/mhlee/Desktop/Work/OrbitData/TimeTab/TIMETAB.DAT"
int main() 
{
    std::ifstream file("G:/내 드라이브/src/OrbitData/TimeTab/TIMETAB.DAT");
    std::vector<std::string> lines;
    std::string line;

    std::vector<std::string> item_list;

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

    for (const auto& line : lines)
    {
        std::istringstream iss(line);
        std::string token;
        while (iss >> token)
        {
            item_list.push_back(token);
        }








    }


//    while(1)
//    {
//
//
//    }





    // std::cout << "The size of int is: " << sizeof(int) << " bytes." << std::endl;
    return 0;


}
