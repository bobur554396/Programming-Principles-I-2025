#include <iostream>

using namespace std;

int main() {
    // - Read and print
    /*
    in:
    3
    4 3 1
    9 0 2
    5 6 7

    out:
    4 3 1
    9 0 2
    5 6 7
    */

    // Reading part
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    
    // Logic part


    // Output part
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << a[i][j] << " ";
        }
        cout << endl;
    }    
    

    return 0;
}