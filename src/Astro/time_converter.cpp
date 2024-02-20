#include "Astro/time_converter.hpp"


namespace propagator
{

    struct DUT1LUT
    {
        double JD = 0.0;
        double DUT1;

        static DUT1LUT &getInstance()
        {
            static DUT1LUT instance;
            return instance;
        }
    };

    TimeConverter::TimeConverter() : leap_cnt_(0), dut1_cnt_(0), prev_i_(0), i_cnt_limit_(20), leap_second_jd_(leap_cnt_)
    {}

    ErrorCode TimeConverter::ReadLeapSecondFromIERS(const std::string &iers_fdir)
    {
        std::vector<std::string> item_list;
        ErrorCode r_status = ErrorCode::SUCCESS;
        ParameterParsing parsed_data(iers_fdir);
        bool tai_utc_flag = false;

        while (1)
        {
            parsed_data.get_item_list(item_list);
            if (item_list.empty()) break;
            if (item_list[0] == "TAIUTC")
            {
                tai_utc_flag = true;
                leap_cnt_ = std::stoi(item_list[1]);
                leap_cnt_ -= 1;
                if (leap_cnt_ <= 0) return ErrorCode::ERROR_NO_LEAP_SECOND_INFO_IN_IERS_FILE;

                parsed_data.get_item_list(item_list);
            }
            else if (tai_utc_flag) // TAIUTC data parsing
            {
                parsed_data.get_item_list(item_list); // skip TAI-UTC first data
                for (int i=0; i<leap_cnt_; i++)
                {
                    parsed_data.get_item_list(item_list);
                    leap_second_jd_.push_back(std::stod(item_list[3]));
                }

            }





        }
        return r_status;
















//        std::ifstream iers(iers_fdir);
//        if (!iers.is_open()) {
//            std::cout << "Error opening file";
//            exit(1);
//        }
//        std::string line;
//        std::getline(iers, line);
//        std::istringstream iss(line);
//        std::vector<std::string> tokens{std::istream_iterator<std::string>{iss},
//                                        std::istream_iterator<std::string>{}};
//        DUT1LUT::getInstance().JD = std::stod(tokens[0]);
//        DUT1LUT::getInstance().DUT1 = std::stod(tokens[1]);
//        return ErrorCode::SUCCESS;
    }


}




//        std::string& time_table_fdir






//        std::ifstream time_table(time_table_fdir);
//        if (!time_table.is_open()) {
//            std::cout << "Error opening file";
//            exit(1);
//        }
//        std::string line;
//        std::getline(time_table, line);
//        std::istringstream iss(line);
//        std::vector<std::string> tokens{std::istream_iterator<std::string>{iss},
//                                        std::istream_iterator<std::string>{}};


