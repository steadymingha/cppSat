#include "common.hpp"

namespace {
    ParameterParsing::ParameterParsing(){

    }
    
    Vector get_item_list()
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
    }
}