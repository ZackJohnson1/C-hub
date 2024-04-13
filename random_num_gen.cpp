#include <iostream>
#include <cstdlib>
#include <ctime>

// Function declaration
float Ranf(float low, float high);

int main() {
    // Variables to store the range
    float low, high;

    // Seed the random number generator with the current time
    srand(static_cast<unsigned int>(time(NULL)));

    // Prompt the user for the lower and upper bounds
    std::cout << "Enter the lower bound: ";
    std::cin >> low;
    std::cout << "Enter the upper bound: ";
    std::cin >> high;

    // Generate a random floating-point number and display it
    float randomNumber = Ranf(low, high);
    std::cout << "Random number between " << low << " and " << high << ": " << randomNumber << std::endl;

    return 0;
}

// Function definition
float Ranf(float low, float high) {
    float r = static_cast<float>(rand());  // 0 - RAND_MAX
    float t = r / static_cast<float>(RAND_MAX);  // 0. - 1.
    return low + t * (high - low);
}
