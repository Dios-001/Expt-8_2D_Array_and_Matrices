#include <iostream>
using namespace std;

int main() {
    const int n = 3, m = 2;

    int A[n][m] = {
    {1, 2},{3, 4},{5, 6}
    };


    int T[m][n];
    
    cout << "original: " << endl;
    for(int i = 0;i<n;i++){
        for(int j = 0;j<m;j++){
            cout << A[i][j] << " ";
            
        }
        cout << endl;
    }
cout << "transpose: "  << endl;
    for (int i = 0; i < n; i++)
      for (int j = 0; j < m; j++)
            T[j][i] = A[i][j];

    for (int i = 0; i < m; i++) {
       for (int j = 0; j < n; j++)
            cout << T[i][j] << " ";
        cout << endl;
    }


    return 0;
}
