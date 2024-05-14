#include <iostream>

int main() {
    double sales = 95000;
    double state_tax = 0.04;
    double county_tax = 0.02;
    double total_owed = (((state_tax + county_tax + 1) * sales) - sales);
    std::cout << total_owed;
    return 0;
}
