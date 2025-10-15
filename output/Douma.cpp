#include <iostream>
#include <cmath>

int main() {
    double radians;
    std::cout << "Введіть значення кута в радіанах (0 < x < 21): ";
    std::cin >> radians;
    if (radians <= 0 || radians >= 21) {
    std::cout << "Значення кута повинно бути в діапазоні (0, 21)." << std::endl;
    return 1;
}
    double degrees = radians * (180.0 / M_PI);
    std::cout << "Значення кута в градусах: " << degrees << std::endl;
    return 0;
}                                                     