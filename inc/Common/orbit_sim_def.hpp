#pragma once
#include "stdint.h"

namespace propagator
{
    namespace sim_param
    {
        constexpr double pi = 3.14159265358979323846;
        constexpr double speed_of_light = 2.99792458E8; // m / sec

        constexpr double to_degree = 180.0 / pi;
        constexpr double arcsec2rad = pi / 648000;
        constexpr double to_radian = pi / 180.0;
        constexpr bool astro_time_reference_tdb = true;
        constexpr uint8_t high = 1;
        constexpr uint8_t low = 0;

        constexpr uint8_t model_param_nmr = 24;
        constexpr uint8_t model_parameter_solar_pressure_coeff = 6;
        constexpr uint8_t num_integrators = 4;
        constexpr uint8_t num_coordinate_systems = 7;
        constexpr uint8_t num_modeling_type = 7;
        // check
        constexpr const char* integrator_name[] = { "ADAMS-MOULTON", "RUNGE-KUTTA-78", "RUNGE-KUTTA-45", "RUNGE-KUTTA-4" };
        constexpr const char* coordinate_system_name[] = { "ICRS", "J2000","TOD", "MOD", "TPTRS", "ECEF", "TEMED" };
        constexpr const char* modeling_type_name[] = { "WGS_72", "WGS_84" };
        // check
        constexpr uint8_t progress = 0;
        constexpr double xmu = 3.986005e5;

        constexpr uint8_t PerturbationForcesNum = 12;

    };

    enum class ModelingType
    {
        WGS_72,
        WGS_84
    };

    enum class CoordinateSystem
    {
        ICRS,
        J2000,
        TOD,
        MOD,
        TPTRS,
        ITRS,
        TEMED
    };

    enum class Integrator
    {
        ADAMS_MOULTON,
        RUNGE_KUTTA_78,
        RUNGE_KUTTA_45,
        RUNGE_KUTTA_4
    };

    enum class OrbitType
    {
        UNKNOWN,
        LAGRANGIAN,
        HFPROPAGATOR,
        J2PROPAGATOR,
        SGP4PROPAGATOR,
        PASSDATA
    };

    enum class PerturbationForce
    {
        GRAVITY,
        LUNISOLAR,
        SOLAR_PRESSURE,
        AIR_DRAG,

        PLANETS,
        PLANET_MERCURY,
        PLANET_VENUS,
        PLANET_MARS,
        PLANET_JUPITER,
        PLANET_SATURN,
        PLANET_URANUS,
        PLANET_NEPTUNE
    };

    enum class AtmosphereModel
    {
        MSIS86
    };

    enum class GravityModel
    {
        EGM96
    };

    enum class PlanetEphemerisModel
    {
        DE405
    };

    namespace user_io_def
    {
        enum class OrbitPropagationInputType
        {
            NONE,
            TLE,
            ORBIT_STACK_DATA,
            ORBIT_PROPAGATION_DATA,
            SPOT_CARD
        };

        enum class OrbitPropagatorType
        {
            NONE,
            J2,
            SGP4,
            HPOP
        };

        enum class PlanetsCode
        {
            NONE,
            MERCURY,
            VENUS,
            EARTH,
            MARS,
            JUPITER,
            SATURN,
            URANUS,
            NEPTUNE,
            PLUTO,
            MOON,
            SUN,
            NUTATION,
            LIBRATION
        };
    }
}