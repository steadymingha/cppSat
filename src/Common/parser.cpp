#include "parser.hpp"
#include "stdio.h"

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
            // if file name includes xx, Errorcode
            throw std::out_of_range("file name or address is incorrect~");
        }
    }


    void ParameterParsing::get_item_list(std::vector<std::string>& item_list)
    {
        static uint16_t i = 0;
        item_list.clear();

        if (lines_.empty()) {}// no data
        else if(i >= lines_.size()) i = 0;// read complete
        else if (lines_[i][0] == '#') {}
        else
        {
            std::istringstream iss(lines_[i]);
            std::string item;
            while (iss >> item)
            {
                item_list.push_back(item);
            }
            i++;

        }








//        if (lines_.empty()) item_list.clear();// no data
//        else if(i >= lines_.size())
//        {
//            item_list.clear(); // read complete
//            i = 0;
//        }
//        else if (lines_[i][0] == '#')
//        {
//            item_list.clear();
//            i = 0;
//        }
//        else
//        {
//            std::istringstream iss(lines_[i]);
//            std::string item;
//            while (iss >> item)
//            {
//                item_list.push_back(item);
//            }
////            item_list.erase(std::remove_if(item_list.begin(), item_list.end(), [](unsigned char c) {
////                return std::isspace(c); }), item_list.end());
//            i++;
//
//        }


    }
}