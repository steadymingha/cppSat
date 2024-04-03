#include "Setup.hpp"


namespace propagator {
    SetupConfig::SetupConfig()
    { }
    SetupConfig::SetupConfig(std::string base_dir)
    {
        //TODO : add Try-Catch Exception handling
        const std::string time_table_fdir = base_dir + "/../../Data/TimeTab/TIMETAB.DAT";
        const std::string ephem_fdir = "Data/DE405";
        ErrorCode status = ErrorCode::SUCCESS;

        AstroEnvSetup& setup = AstroEnvSetup::getInstance();

//        try
//        {
        status = setup.AstroTime().ReadLeapSecondFromIERS(time_table_fdir);
        status = setup.EarthRotation().ReadEarthRotationParameterFromIERS(time_table_fdir);


//        }


//        ErrorCode status = ErrorCode::SUCCESS;

    }

}
