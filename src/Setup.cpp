#include <string>
#include "Setup.hpp"


namespace propagator {
    SetupConfig::SetupConfig() {
        //TODO : need to be replaced
        const std::string time_table_fdir = "Data/TimeTab/TIMETAB.DAT";
        const std::string ephem_fdir = "Data/DE405";


        AstroEnvSetup& setup = AstroEnvSetup::getInstance();

        setup.AstroTime().ReadLeapSecondFromIERS(time_table_fdir);
//        setup.EarthRotation().Re...






        ErrorCode status = ErrorCode::SUCCESS;







    
    }


    // Setup::~SetupConfig() {
    // }


}
