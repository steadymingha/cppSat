#pragma once

#include "Astro/astro_definition.hpp"
#include "error_code.hpp"


#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <vector>
#include <chrono>

#include <filesystem>

#include "parser.hpp"
#include "error_code.hpp"

#include <Eigen/Dense>

namespace propagator
{
    class SetupConfig
    {
        public:

        SetupConfig();
        SetupConfig(std::string basedir);
        ~SetupConfig() {}
    };

}

