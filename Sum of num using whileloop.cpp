#include <iostream>

int main() {
    int limit;
    int sum = 0;
    int i = 1;

    // Reading the limit from the user
    std::cout << "Enter the limit: ";
    std::cin >> limit;

    // Calculating the sum of natural numbers up to the given limit using a while loop
    while (i <= limit) {
        sum += i;
        i++;
    }

    // Displaying the sum
    std::cout << "The sum of natural numbers up to " << limit << " is: " << sum << std::endl;

    return 0;
}
