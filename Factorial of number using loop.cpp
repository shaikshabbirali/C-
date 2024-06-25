#include <iostream>
using namespace std;
unsigned long long factorial(int number) {
    unsigned long long fact = 1;
    for (int i = 1; i <= number; ++i) {
        fact *= i;
    }
    return fact;
}
int main() {
    int number;
    cout << "Enter a number to find its factorial: ";
    cin >> number;
    if (number < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
    } else {
        unsigned long long fact = factorial(number);
        cout << "Factorial of " << number << " is: " << fact << endl;
    }
    return 0;
}
