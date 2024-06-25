#include <iostream>
using namespace std;
bool isBuzz(int number) {
    return (number % 7 == 0 || number % 10 == 7);
}
int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;
    if (isBuzz(number)) {
        cout << number << " is a buzz number." << endl;
    } else {
        cout << number << " is not a buzz number." << endl;
    }
    return 0;
}
