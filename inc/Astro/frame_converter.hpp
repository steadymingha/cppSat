#pragma once

#include <Eigen/Dense>
#include "error_code.hpp"
#include "parser.hpp"

#include "Astro/time_converter.hpp"
#include "orbit_sim_def.hpp"

namespace propagator{
    class FrameConverter{
        public:
            FrameConverter();
            ~FrameConverter() {}

            ErrorCode ReadEarthRotationParameterFromIERS(const std::string &iers_fdir);

        private:
            uint16_t prev_i_polar_motion_;
            uint16_t num_polar_motion_entries_;
            double_t current_jd_;
            Eigen::VectorXd lunar_solar_elements_;

            struct PolarMotionTable
            {
                double_t jd_ = 0.0;
                double_t xp_ = 0.0;
                double_t yp_ = 0.0;
            };

            std::vector<PolarMotionTable> polar_motion_;
            Eigen::Matrix<double_t, 106,9> nutation_table_;







    };
}

