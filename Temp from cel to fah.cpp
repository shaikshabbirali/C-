#include <iostream>

int main() {
    float celsius, fahrenheit;

    std::cout << "Enter temperature in Celsius: ";
    std::cin >> celsius;

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;

    return 0;
}
