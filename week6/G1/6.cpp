#include <iostream>

using namespace std;

int main() {
    // - [x] 2D array (matrix)
    // int a[3] = {5, 2, 4};
    /*
    dataType arrayName[rows][columns];
    */
    int a[3][4]; // 3 rows, 4 columns
    int matrix[2][3] = {{4, 3, 1}, {9, 0, 2}}; // 2 rows, 3 columns
    /*
    matrix:
        columns:  0  1  2               
    row: 0 =>    [4, 3, 1]
    row: 1 =>    [9, 0, 2]
    */

    cout << matrix[0][0] << endl; // 4
    cout << matrix[1][1] << endl; // 0
    cout << matrix[1][2] << endl; // 2
    

    return 0;
}