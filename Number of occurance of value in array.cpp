#include <iostream>
using namespace std;
int main() {
    int size, value, count = 0;
    cout << "Enter the size of the array: ";
    cin >> size;
    int* array = new int[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }
    cout << "Enter the value to find the number of occurrences: ";
    cin >> value;
    for (int i = 0; i < size; ++i) {
        if (array[i] == value) {
            ++count;
        }
    }
    cout << "The number of occurrences of " << value << " is: " << count << endl;
    delete[] array;
    return 0;
}
