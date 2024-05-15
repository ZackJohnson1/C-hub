#include <iostream>
#include <cmath>

using namespace std;

int main() {
    double pi = 3.14159265359;
    double radius;
    cout << "Please enter the radius: ";
    cin >> radius;
    double area = pi * pow(radius,2);
    cout << "Area of the circle: " << area;
    return 0;
}
