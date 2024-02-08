#pragma once

#include "Astro/time_converter.hpp"
#include "Astro/frame_converter.hpp"
#include "Astro/planet_ephemeris.hpp"

namespace propagator{
    class AstroEnvSetup{
        public:

        AstroEnvSetup();
        ~AstroEnvSetup() = default;

        static TimeConverter astro_time;
        static FrameConverter iers;
        static PlanetEphemeris de405;

    };

}

