#include <iostream>
#include <vector>
using namespace std;
vector<vector<int>> multiplyMatrices(const vector<vector<int>>& mat1, const vector<vector<int>>& mat2) {
    int rows1 = mat1.size();
    int cols1 = mat1[0].size();
    int cols2 = mat2[0].size();
    vector<vector<int>> result(rows1, vector<int>(cols2, 0));
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols2; ++j) {
            for (int k = 0; k < cols1; ++k) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }

    return result;
}

int main() {
    int rows1, cols1, rows2, cols2;
    cout << "Enter the number of rows and columns of the first matrix: ";
    cin >> rows1 >> cols1;
    vector<vector<int>> mat1(rows1, vector<int>(cols1));
    cout << "Enter the elements of the first matrix:" << endl;
    for (int i = 0; i < rows1; ++i) {
        for (int j = 0; j < cols1; ++j) {
            cin >> mat1[i][j];
        }
    }
    cout << "Enter the number of rows and columns of the second matrix: ";
    cin >> rows2 >> cols2;
    if (cols1 != rows2) {
        cout << "Matrices cannot be multiplied." << endl;
        return 1;
    }
    vector<vector<int>> mat2(rows2, vector<int>(cols2));
    cout << "Enter the elements of the second matrix:" << endl;
    for (int i = 0; i < rows2; ++i) {
        for (int j = 0; j < cols2; ++j) {
            cin >> mat2[i][j];
        }
    }
    vector<vector<int>> result = multiplyMatrices(mat1, mat2);
    cout << "The resultant matrix is:" << endl;
    for (const auto& row : result) {
        for (const auto& element : row) {
            cout << element << " ";
        }
        cout << endl;
    }
    return 0;
}
