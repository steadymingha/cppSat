#include "parser.hpp"

namespace propagator
{
    ParameterParsing::ParameterParsing(const std::string& file_dir):file_(file_dir), lines_()
    {
        std::string line;

        if (file_.is_open())
        {
            std::stringstream buffer;
            buffer << file_.rdbuf();

            while(std::getline(buffer, line))
            {
                lines_.push_back(line);
            }
            file_.close();
        }
        else
        {
            //exception needs
        }
    }


    void get_item_list(std::string& item_list)
    {
        std::istringstream iss(line);
        std::string token;
        while (iss >> token)
        {
            item_list.push_back(token);
        }
    }
}