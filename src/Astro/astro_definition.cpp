#include <string>
#include "Astro/astro_definition.hpp"



namespace propagator
{
    AstroEnvSetup::AstroEnvSetup()
    {
        astro_time = TimeConverter(const std::string& time_table_fdir);
        iers = FrameConverter(const std::string& time_table_fdir);
        de405 = PlanetEphemeris(const std::string& ephem_fdir);
    }

}