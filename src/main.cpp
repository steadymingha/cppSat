#include "Setup.hpp"

using namespace propagator;
int main(int argc, char* argv[])
{
    std::string base_dir = argv[0];
    SetupConfig setup = SetupConfig(base_dir);

//    int test = 0;



    /*// AstroEnv Test Start //
    AstroEnvSetup& astro = AstroEnvSetup::getInstance() ;
    propagator::ErrorCode status;
    std::string iers_fdir = "../Data/TimeTab/TIMETAB.DAT";
    status = astro.AstroTime().ReadLeapSecondFromIERS(iers_fdir);
    status = astro.EarthRotation().ReadEarthRotationParameterFromIERS(iers_fdir);
    /// AstroEnv Test End /*/














//    std::cout << "hello" << std::endl;

    return 0;


}
