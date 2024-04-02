#pragma once

#include <Eigen/Dense>
#include "error_code.hpp"
#include "parser.hpp"

namespace propagator{
    class FrameConverter{
        public:
            FrameConverter();
            ~FrameConverter() {}

            ErrorCode ReadEarthRotationParameterFromIERS(const std::string &iers_fdir);

        private:
            uint16_t prev_i_polar_motion_;
            double current_jd_;
            Eigen::VectorXd lunar_solar_elements_;

            struct PolarMotionTable
            {
                double jd_ = 0.0;
                double xp_ = 0.0;
                double yp_ = 0.0;
            };

            std::vector<PolarMotionTable> polar_motion_;
            Eigen::Matrix<double, 106,9> nutation_table_;







    };
}

