#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <chrono>
#include "Setup.hpp"
#include <filesystem>
//"C:/Users/mhlee/Desktop/Work/OrbitData/TimeTab/TIMETAB.DAT"
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
