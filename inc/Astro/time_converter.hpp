#pragma once

#include "type_def.hpp"
#include "error_code.hpp"
#include "parser.hpp"

namespace propagator{
    class TimeConverter{
        public:
            TimeConverter();
            ~TimeConverter() = default;

            double GetDUT1(double dJD);

            ErrorCode ReadLeapSecondFromIERS(const std::string& iers_fdir);
            LeapSecond_t GetLeapSecond(const double& jd_utc);
            JD_t UTCJDToTDBJD(double jd);
            JD_t UTCJDToTTJD(double jd);

            JD_t TDBJDToUTCJD(double jd);
            JD_t TTJDToUTCJD(double jd);


        private:
            uint8_t leap_cnt_;
            uint16_t dut1_cnt_;
            uint16_t prev_i_;
            uint8_t i_cnt_limit_;


        };
}


