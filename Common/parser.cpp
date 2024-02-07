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
        }
    }


    void ParameterParsing::get_item_list(std::string& item_list)
    {
        static uint8_t i = 0;

        if (lines_[i++].empty()) item_list.clear();
        else if (lines_[i++][0] == '#') item_list.clear();
        else if(i >= lines_.size()) item_list.clear(); // read complete
        else
        { //lambda function understanding
            item_list = lines_[i++];
            item_list.erase(std::remove_if(item_list.begin(), item_list.end(), [](unsigned char c) {
                return std::isspace(c); }), item_list.end());
        }

    }
}