#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <chrono>
#include "Setup.hpp"
#include <filesystem>

#include "parser.hpp"

int main()
{
//    std::ifstream file("../Data/TimeTab/TIMETAB.DAT");
    std::vector<std::string> lines;
    std::string line;
    std::filesystem::path cwd = std::filesystem::current_path();
    std::cout << "cwd: " << cwd << std::endl;
    std::vector<std::string> item_list;
    std::string file_dir = "../Data/TimeTab/test.DAT";
    propagator::ParameterParsing parsed_data(file_dir);

    while(1)
    {
        parsed_data.get_item_list(item_list);
        if (item_list.empty()) {
            break;
        }

        std::cout << "item check : " << item_list[0] << std::endl;
        int test = 0;
//        }
    }







//    if (file.is_open())
//    {
//        std::stringstream buffer;
//        buffer << file.rdbuf();
//
//        while(std::getline(buffer, line))
//        {
//            lines.push_back(line);
//        }
//    file.close();
//    }
//    int size_vec = lines.size();
//    std::cout << lines[2] << std::endl;






//    while(1)
//    {
//
//
//    }





    // std::cout << "The size of int is: " << sizeof(int) << " bytes." << std::endl;
    return 0;


}
