#include <iostream>
#include <limits.h> 
using namespace std;
int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    if (size < 2) {
        cout << "Array size should be at least 2." << endl;
        return 1;
    }
   int* array = new int[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> array[i];
    }
    int firstLargest = INT_MIN;
    int secondLargest = INT_MIN;
    for (int i = 0; i < size; ++i) {
        if (array[i] > firstLargest) {
            secondLargest = firstLargest;
            firstLargest = array[i];
        } else if (array[i] > secondLargest && array[i] < firstLargest) {
            secondLargest = array[i];
        }
    }
    if (secondLargest == INT_MIN) {
        cout << "There is no second largest element in the array." << endl;
    } else {
        cout << "The second largest element in the array is: " << secondLargest << endl;
    }
    delete[] array;
    return 0;
}
