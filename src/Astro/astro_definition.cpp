#include <string>
#include "Astro/astro_definition.hpp"



namespace propagator
{
    AstroEnvSetup::AstroEnvSetup()
    {}
    AstroEnvSetup& AstroEnvSetup::getInstance()
    {
        static AstroEnvSetup astro;
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


