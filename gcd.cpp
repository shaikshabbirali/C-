#include <iostream>

int main() {
    int num1, num2;
    std:: cin >> num1;
    std:: cin >> num2;

    int gcd;
    for (int i = 1; i <= num1 && i <= num2; ++i) {
        if (num1 % i == 0 && num2 % i == 0) {
            gcd = i;
        }
    }

    std::cout << "GCD of " << num1 << " and " << num2 << " is " << gcd << std::endl;

    return 0;
}
