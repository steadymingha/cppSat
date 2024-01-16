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
    std::ifstream file("C:/Users/mingh/Desktop/Work/pySat_OP/Data/TimeTab/TIMETAB.DAT");
    std::vector<std::string> lines;
    std::string line;

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

    // std::cout << "The size of int is: " << sizeof(int) << " bytes." << std::endl;
    return 0;


}
