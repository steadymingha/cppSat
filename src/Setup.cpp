#include <string>
#include "Setup.hpp"


namespace propagator {
    void SetupConfig() {
        //TODO : need to be replaced
        const std::string time_table_fdir = "Astro/time_table.txt";
        const std::string ephem_fdir = "Astro/ephem.txt";

        bool status;

//        status = AstroEnvSetup::getInstance()->astro_time.ReadLeapSecondFromIERS()
        AstroEnvSetup* AstroEnvSetup::getInstance()




        ErrorCode status = ErrorCode::SUCCESS;







    
    }


    // Setup::~SetupConfig() {
    // }


}
