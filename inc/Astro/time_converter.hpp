#pragma once

#include <string>
#include "type_def.hpp"
#include "error_code.hpp"
#include "parser.hpp"

namespace propagator{
    class TimeConverter{
        public:
            TimeConverter();
            ~TimeConverter() {}

            double GetDUT1(double dJD);

            ErrorCode ReadLeapSecondFromIERS(const std::string& iers_fdir);
            LeapSecond_t GetLeapSecond(const double& jd_utc);
            JD_t UTCJDToTDBJD(double jd);
            JD_t UTCJDToTTJD(double jd);

            JD_t TDBJDToUTCJD(double jd);
            JD_t TTJDToUTCJD(double jd);

//            struct Dut1LUT
//            {
//                double jd = 0.0;
//                double dut1 = 0.0;
//
//                static Dut1LUT &getInstance()
//                {
//                    static Dut1LUT instance;
//                    return instance;
//                }
//            };


        private:
            uint8_t leap_cnt_;
            uint16_t dut1_cnt_;
            uint16_t prev_i_;
            uint8_t i_cnt_limit_;

            struct Dut1LUT
            {
                double jd = 0.0;
                double dut1 = 0.0;

                static Dut1LUT &getInstance()
                {
                    static Dut1LUT instance;
                    return instance;
                }
            };

            std::vector<double> leap_second_jd_;
            std::vector<Dut1LUT> dut1_table_;
        std::vector<Dut1LUT> myVector(10);





    };
}


