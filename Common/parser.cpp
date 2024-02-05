#include "parser.hpp"

namespace propagator
{
    ParameterParsing::ParameterParsing(const std::string& file_dir):file_(file_dir)
    {
        // parsed_data = ParameterParsing()
        // reader = open(iers_fpath)
        // while True:
        //    line = reader.readline()
        // merge to parameterparsing constructor
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
            throw std::out_of_range("file loading failed.");
            //exception needs
        }
    }


    std::vector<std::string> ParameterParsing::get_item_list(void)
    {
        static uint8_t i = 0;
        std::vector<std::string> item_list;
        item_list.push_back(lines_[i++]);
        // wrongwrongwrongwrongwrongwrong
        if(i >= lines_.size()) return item_list;


    }
}