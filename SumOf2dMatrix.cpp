#include <iostream>

int main() {
    int arr1[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int arr2[2][3] = {{6, 5, 4}, {3, 2, 1}};
    int sum[2][3];

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            std::cout << sum[i][j] << " ";
        }
        std::cout << std::endl;
    }
/* output: 
    7 7 7 
    7 7 7 */
    return 0;
}
