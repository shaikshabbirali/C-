#include <iostream>
#include <unordered_set>
using namespace std;
int sumOfSquares(int n) {
    int sum = 0;
    while (n) {
        int digit = n % 10;
        sum += digit * digit;
        n /= 10;
    }
    return sum;
}
bool isHappy(int n) {
    unordered_set<int> seen;
    while (n != 1 && seen.find(n) == seen.end()) {
        seen.insert(n);
        n = sumOfSquares(n);
    }
    return n == 1;
}
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    if (isHappy(num)) {
        cout << num << " is a happy number!" << endl;
    } else {
        cout << num << " is not a happy number." << endl;
    }
    return 0;
}
