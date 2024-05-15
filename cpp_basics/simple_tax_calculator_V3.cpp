#include <iostream>

using namespace std;

int main() {
    double sales = 95000;
    cout << "Sales: $" << sales << endl;

    const double state_tax_rate = 0.04;
    double state_tax = sales * state_tax_rate;
    cout << "State Tax: $" << state_tax << endl;

    const double county_tax_rate = 0.02;
    double county_tax = sales * county_tax_rate;
    cout << "County Tax: $" << county_tax << endl;

    double total_tax = (state_tax + county_tax );
    cout << "Total Taxes Owed: $" << total_tax << endl;
    return 0;
}
