#include <iostream>
using namespace std;
int main() {
    int size, pos, newValue;
    cout << "Enter the size of the array: ";
    cin >> size;
    if (size <= 0) {
        cout << "Array size should be greater than 0." << endl;
        return 1;
    }
    int* array = new int[size + 1]; // Increase size of array by 1
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }
    cout << "Enter the position to insert the new element (0-based index): ";
    cin >> pos;
    if (pos < 0 || pos > size) {
        cout << "Invalid position!" << endl;
        delete[] array;
        return 1;
    }
    cout << "Enter the new value to insert: ";
    cin >> newValue;
    for (int i = size; i > pos; --i) {
        array[i] = array[i - 1];
    }
    array[pos] = newValue;
    ++size; // Increase size of the array
    cout << "Array after insertion: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
    delete[] array;
    return 0;
}
