#include <iostream>
using namespace std;
int main() {
    int size, pos;
    cout << "Enter the size of the array: ";
    cin >> size;
    if (size <= 0) {
        cout << "Array size should be greater than 0." << endl;
        return 1;
    }
    int* array = new int[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }
    cout << "Enter the position of the element to delete (0-based index): ";
    cin >> pos;
    if (pos < 0 || pos >= size) {
        cout << "Invalid position!" << endl;
        delete[] array;
        return 1;
    }
    for (int i = pos; i < size - 1; ++i) {
        array[i] = array[i + 1];
    }
    --size;
    cout << "Array after deletion: ";
    for (int i = 0; i < size; ++i) {
        cout << array[i] << " ";
    }
    cout << endl;
    delete[] array;
    return 0;
}
