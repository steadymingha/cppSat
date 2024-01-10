#include <string>
#include "Astro/astro_definition.hpp"




namespace Propagator {
    AstroEnvSetup::AstroEnvSetup(std::string& time_table_fdir,std::string& ephem_fdir) {
        astro_time = TimeConverter(time_table_fdir);
        iers = FrameConverter(time_table_fdir);
        de405 = PlanetEphemeris(ephem_fdir);

    }

}