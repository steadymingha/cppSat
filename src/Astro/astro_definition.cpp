#include <string>
#include "Astro/astro_definition.hpp"



namespace propagator
{
    AstroEnvSetup::AstroEnvSetup()//const std::string &time_table_fdir, const std::string &ephem_fdir)
    {
        astro_time = TimeConverter(); //const std::string& time_table_fdir);
        iers = FrameConverter();      //const std::string& time_table_fdir);
        de4xx = PlanetEphemeris();    //const std::string& ephem_fdir);


    }

}


