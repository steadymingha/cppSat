#include "Astro/time_converter.hpp"


namespace propagator {

    struct DUT1LUT {
        double JD = 0.0;
        double DUT1;

        static DUT1LUT &getInstance() {
            static DUT1LUT instance;
            return instance;
        }
    };

    TimeConverter::TimeConverter() : leap_cnt_(0), dut1_cnt_(0), prev_i_(0), i_cnt_limit_(20) {

    }

    ErrorCode ReadLeadSecondFromIERS(const std::string &iers_fdir) {










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


