#pragma once

#include "Astro/time_converter.hpp"
#include "Astro/frame_converter.hpp"
#include "Astro/planet_ephemeris.hpp"

namespace propagator{
    class AstroEnvSetup{
        public:
        static AstroEnvSetup& getInstance()
        {
            static AstroEnvSetup astro;
            return astro;
        }

        AstroEnvSetup(const AstroEnvSetup&) = delete;
        AstroEnvSetup& operator=(const AstroEnvSetup&) = delete;

        TimeConverter astro_time;
        FrameConverter iers;
        PlanetEphemeris de4xx;

    private:
        AstroEnvSetup();
        ~AstroEnvSetup() {}

    };

}
//Singleton implemention
//https://hwan-shell.tistory.com/227
