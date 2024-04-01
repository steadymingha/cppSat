#include <string>
#include "Setup.hpp"


namespace propagator {
    void SetupConfig() {
        //TODO : need to be replaced
        const std::string time_table_fdir = "Astro/time_table.txt";
        const std::string ephem_fdir = "Astro/ephem.txt";

        bool status;

        AstroEnvSetup& setup = AstroEnvSetup::getInstance();

        setup.AstroTime().ReadLeapSecondFromIERS(time_table_fdir);
        setup.EarthRotation().Re...






        ErrorCode status = ErrorCode::SUCCESS;







    
    }


    // Setup::~SetupConfig() {
    // }


}
