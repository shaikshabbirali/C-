#include <iostream>
#include <vector>
using namespace std;
int diagonalSum(const vector<vector<int>>& matrix) {
    int n = matrix.size();
    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;
    for (int i = 0; i < n; ++i) {
        primaryDiagonalSum += matrix[i][i]; // Primary diagonal
        secondaryDiagonalSum += matrix[i][n - i - 1]; // Secondary diagonal
    }
    if (n % 2 == 1) {
        primaryDiagonalSum -= matrix[n / 2][n / 2];
    }
    return primaryDiagonalSum + secondaryDiagonalSum;
}
int main() {
    int n;
    cout << "Enter the size of the matrix: ";
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n; ++j) {
            cin >> matrix[i][j];
        }
    }
    int sum = diagonalSum(matrix);
    cout << "The sum of the diagonals is: " << sum << endl;
    return 0;
}
