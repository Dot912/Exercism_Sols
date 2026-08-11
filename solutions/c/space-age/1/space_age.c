#include "space_age.h"

float age(planet_t planet, int64_t seconds)
{
    float orbital_periods[] = {
        0.2408467,
        0.61519726,
        1.0,
        1.8808158,
        11.862615,
        29.447498,
        84.016846,
        164.79132
    };
    
    if (planet < MERCURY || planet > NEPTUNE)
    {
        return -1.0;
    }
    
    const float seconds_yearly_earth = 31557600.0;
    
    float earth_years = seconds / seconds_yearly_earth;
    float planet_years = earth_years / orbital_periods[planet];
    
    return planet_years;
}