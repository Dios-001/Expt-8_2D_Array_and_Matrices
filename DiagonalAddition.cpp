#include <iostream>
using namespace std;

int main() {
    const int n = 3;

    int A[n][n] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int diagonalSum = 0;
    

    for (int i = 0; i < n; i++) {
        diagonalSum += A[i][i];
        
    }

    cout << "Diagonal Sum: " << diagonalSum << endl;
   

    return 0;
}
