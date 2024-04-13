#include <iostream>
#include <cmath>
#include <cstdlib>
#include <ctime>

#define _USE_MATH_DEFINES
#include <cmath>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

// Constants for temperature and precipitation simulation
const float AVG_PRECIP_PER_MONTH = 7.0;        // Average precipitation per month (inches)
const float AMP_PRECIP_PER_MONTH = 6.0;        // Amplitude of precipitation variation
const float RANDOM_PRECIP = 2.0;               // Random precipitation noise

const float AVG_TEMP = 60.0;                   // Average temperature (degrees Fahrenheit)
const float AMP_TEMP = 20.0;                   // Amplitude of temperature variation
const float RANDOM_TEMP = 10.0;                // Random temperature noise

// Global variables for the simulation
int NowYear = 2024;  // starting year
int NowMonth = 0;    // starting month (January)

float NowPrecip;     // inches of rain per month
float NowTemp;       // temperature this month

// Generate a random float between min and max
float Ranf(float min, float max) {
    float r = (float)rand() / (float)RAND_MAX;
    return min + r * (max - min);
}

int main() {
    srand(static_cast<unsigned int>(time(NULL)));  // Seed the random number generator

    // Simulation for each year from 2024 to 2029
    for (NowYear = 2024; NowYear <= 2029; ++NowYear) {
        // Simulation for each month
        for (NowMonth = 0; NowMonth < 12; ++NowMonth) {
            // Calculate the angle of Earth's orbit for the current month
            float ang = (30.0 * (float)NowMonth + 15.0) * (M_PI / 180.0);

            // Calculate temperature
            float temp = AVG_TEMP - AMP_TEMP * cos(ang);
            NowTemp = temp + Ranf(-RANDOM_TEMP, RANDOM_TEMP);

            // Calculate precipitation
            float precip = AVG_PRECIP_PER_MONTH + AMP_PRECIP_PER_MONTH * sin(ang);
            NowPrecip = precip + Ranf(-RANDOM_PRECIP, RANDOM_PRECIP);
            if (NowPrecip < 0.0)
                NowPrecip = 0.0;

            // Output results
            std::cout << "Year " << NowYear << ", Month " << NowMonth + 1 << ":" << std::endl;
            std::cout << "Temperature: " << NowTemp << " degrees Fahrenheit" << std::endl;
            std::cout << "Precipitation: " << NowPrecip << " inches" << std::endl;
            std::cout << std::endl;
        }
    }

    return 0;
}
