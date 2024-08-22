#include <iostream>
using namespace std;

int main() {
     int n = 3;
    int a[n][n] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

if(n != n){
     cout << "addition not possible" << endl;
}
     
    int diagonalSum = 0;
     for (int i = 0; i < n; i++) {
        diagonalSum += a[i][i];
        
    }
    
    for(int i = 0;i<3;i++){
        for(int j = 0; j<3;j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }

    cout << "Diagonal Sum: " << diagonalSum << endl;
   

    return 0;
}
