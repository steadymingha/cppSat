#include "Astro/time_converter.hpp"


namespace propagator
{

    TimeConverter::TimeConverter() : leap_cnt_(0), dut1_cnt_(0), prev_i_(0), i_cnt_limit_(20), leap_second_jd_(leap_cnt_)
    {}

    ErrorCode TimeConverter::ReadLeapSecondFromIERS(const std::string &iers_fdir)
    {
        std::vector<std::string> item_list;
        ErrorCode r_status = ErrorCode::SUCCESS;
        ParameterParsing parsed_data(iers_fdir);

        while (1)
        {
            parsed_data.get_item_list(item_list);
            if (item_list.empty()) break;
            if (item_list[0] == "TAIUTC") //check header for TAI-UTC
            {
                uint8_t leap_cnt = std::stoi(item_list[1]);
                leap_cnt -= 1;
                if (leap_cnt <= 0) return ErrorCode::ERROR_NO_LEAP_SECOND_INFO_IN_IERS_FILE;

                parsed_data.get_item_list(item_list);
                for (int i = 0; i < leap_cnt; i++) {
                    parsed_data.get_item_list(item_list);
                    leap_second_jd_.push_back(std::stod(item_list[3]));
                }

                leap_cnt_ = leap_cnt;

            } else if (item_list[0] == "UT1UTC/XY") // UT1-UTC data parsing
            {
                uint16_t eop_cnt = std::stoi(item_list[1]);
                if (eop_cnt <= 0) return ErrorCode::ERROR_NO_EARTH_ORIENTATION_PARAMETER_IN_IERS_FILE;
                dut1_table_.resize(eop_cnt);

                for (int i = 0; i < eop_cnt; i++) {
                    parsed_data.get_item_list(item_list);
                    dut1_table_[i].jd = std::stod(item_list[1]);
                    dut1_table_[i].dut1 = std::stod(item_list[2]);
                }

                dut1_cnt_ = eop_cnt;

            }
        }
        return r_status;


    }


}






