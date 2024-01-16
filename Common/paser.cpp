#include "parser.hpp"

namespace propagator
{
    ParameterParsing::ParameterParsing(const std::string& file_dir):file_(file_dir)
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
            return lines_
        }
        else
        {
            //exception needs
        }
    }


    std::vector<std::string> get_item_list(void)
    {

    }
}