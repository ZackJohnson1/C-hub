#include <iostream>

int main() {
    int x = 10;
    int y = x++;    // Postfix: x = 11, y = 10
    int z = ++x;    // Prefix: x = 12, z = 12
    std::cout << y << ", " << x << ", "<< z;
    return 0;
}
