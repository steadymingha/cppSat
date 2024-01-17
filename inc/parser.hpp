#pragma once
#include <fstream>
#include <string>
#include <sstream>
#include <vector>

namespace propagator
{
    class ParameterParsing
    {
        public:

        ParameterParsing(const std::string& file_dir);
        ~ParameterParsing();

        void get_item_list(std::vector<std::string>& item_list);

        private:

        std::ifstream file_;
        std::vector<std::string> lines_;
    };
}