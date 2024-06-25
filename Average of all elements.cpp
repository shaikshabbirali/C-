#include <iostream>
using namespace std;
int main() {
    int size;
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
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    double average = static_cast<double>(sum) / size;
    cout << "The average of all elements in the array is: " << average << endl;
    delete[] array;
    return 0;
}
