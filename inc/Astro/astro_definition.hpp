#ifndef _ASTRO_DEF_H
#define _ASTRO_DEF_H

#include "Astro/time_converter.hpp"
#include "Astro/frame_converter.hpp"
#include "Astro/planet_ephemeris.hpp"

namespace propagator{
    class AstroEnvSetup{
        public:

        AstroEnvSetup();
        ~AstroEnvSetup();

        static propagator::TimeConverter astro_time;
        static propagator::FrameConverter iers;
        static propagator::PlanetEphemeris de405;

    };

}


#endif
