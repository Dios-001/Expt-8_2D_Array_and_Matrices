#include <iostream>
using namespace std;

int main() {
    const int n = 2, m = 3, p = 2;

    int A[n][m] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    int B[m][p] = {
        {7, 8},
        {9, 10},
        {11, 12}
    };

    int C[n][p] = {0};

    for (int i = 0; i < n; i++)
        for (int j = 0; j < p; j++)
            for (int k = 0; k < m; k++)
                C[i][j] += A[i][k] * B[k][j];

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < p; j++)
            cout << C[i][j] << " ";
        cout << endl;
    }

    return 0;
}
