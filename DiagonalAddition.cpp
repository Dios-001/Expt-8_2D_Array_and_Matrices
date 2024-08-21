#include <iostream>
using namespace std;

int main() {
    const int n = 3;

    int A[n][n] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int primaryDiagonalSum = 0;
    int secondaryDiagonalSum = 0;

    for (int i = 0; i < n; i++) {
        primaryDiagonalSum += A[i][i];
        secondaryDiagonalSum += A[i][n - i - 1];
    }

    cout << "Primary Diagonal Sum: " << primaryDiagonalSum << endl;
    cout << "Secondary Diagonal Sum: " << secondaryDiagonalSum << endl;

    return 0;
}
