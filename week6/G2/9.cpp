#include <iostream>

using namespace std;

int main() {
    // - [ ] max element in matrix with location
    /*
    in:
    3
    -1 2 3
    9 -5 6
    7 8 4

    out:
    9 1 0
    */
    freopen("input.txt", "r", stdin); // r - read
    // freopen("output.txt", "w", stdout); // w - write

    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int maxElement = a[0][0], row = 0, col = 0;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(a[i][j] > maxElement) {
                maxElement = a[i][j];
                row = i;
                col = j;
            }
        }
    }

    cout << maxElement << " " << row << " " << col << endl;



    return 0;
}