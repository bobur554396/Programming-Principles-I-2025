#include <iostream>

using namespace std;

int main() {
    // - [x] 2D array (matrix)
    // int a[3] = {5, 2, 4};
    /*
    dataType arrayName[rows][columns];
    */
    int a[3][4]; // 3 rows, 4 columns
    int rows = 2, columns = 3;
    int matrix[2][3] = {{4, 3, 1}, {9, 0, 2}}; // 2 rows, 3 columns
    /*
    matrix:
        columns:  0  1  2               
    row: 0 =>    [4, 3, 1]
    row: 1 =>    [9, 0, 2]

    indexes:     00 01 02
                 10 11 12
    */

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < columns; j++){
            // cout << i << j << " ";
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
    

    return 0;
}