#include <iostream>

using namespace std;

int main() {
    // - [ ] 2D array (matrix)
    /*
    dataType arrayName[rows][columns];

    int a1[2][3]; // initialization
    int a1[2][3] = { 
        {4, 0, 1}, {8, 3, 6} 
    }; // declaration + initialization


    column:  0  1  2
    row 0:  [4][0][1]
    row 1:  [8][3][6]

    indexes:
    row 0:  [0][0] [0][1] [0][2]
    row 1:  [1][0] [1][1] [1][2]        


    */
    int a1[2][3] = { {4, 0, 1}, {8, 3, 6} };

    // cout << a1[0][2] << endl;
    // cout << a1[1][2] << endl;

    for(int i = 0; i < 2; i++) {// i = 0 => j = 0, 1, 2; ...
        for(int j = 0; j < 3; j++) {
            cout << a1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}