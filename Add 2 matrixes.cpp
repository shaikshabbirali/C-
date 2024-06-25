#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> addMatrices(const vector<vector<int>>& mat1, const vector<vector<int>>& mat2) {
    int rows = mat1.size();
    int cols = mat1[0].size();
    vector<vector<int>> result(rows, vector<int>(cols));
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    return result;
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows and columns of the matrices: ";
    cin >> rows >> cols;
    vector<vector<int>> mat1(rows, vector<int>(cols));
    vector<vector<int>> mat2(rows, vector<int>(cols));
    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter the elements of the second matrix:" << endl;
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            cin >> mat2[i][j];
        }
    }
    vector<vector<int>> result = addMatrices(mat1, mat2);
    cout << "The resultant matrix is:" << endl;
    for (const auto& row : result) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
    return 0;
}
