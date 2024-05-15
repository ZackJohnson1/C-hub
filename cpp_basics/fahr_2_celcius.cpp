#include <iostream>

using namespace std;

int main() {
    double fahr;
    cout << "Enter the temp in fahrenheit: ";
    cin >> fahr;
    double celcius = (fahr - 32) * (5.0/9.0);   // must be floating point to avoid integer division
    cout << "The temperature in celcius is: " << celcius;

    return 0;
}
