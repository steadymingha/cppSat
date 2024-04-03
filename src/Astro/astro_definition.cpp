#include <string>
#include "Setup.hpp"



namespace propagator
{
    AstroEnvSetup::AstroEnvSetup(TimeConverter& astro_time) : astro_time_(astro_time)
    {}
    AstroEnvSetup& AstroEnvSetup::getInstance()
    {
        static AstroEnvSetup astro(TimeConverter::getInstance());
        return astro;
    }

    // delegate methods for astro time, iers, de405 member objects

    TimeConverter& AstroEnvSetup::AstroTime()
    {
        return astro_time_;
    }

    FrameConverter& AstroEnvSetup::EarthRotation()
    {
        return iers_;
    }

    PlanetEphemeris& AstroEnvSetup::NbodyEphemeris()
    {
        return de4xx_;
    }

}


