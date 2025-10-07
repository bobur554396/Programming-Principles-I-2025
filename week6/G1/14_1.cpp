#include <iostream>

using namespace std;

int main() {
    // - [ ] symmetric matrix
    /*
    in:
    3
    4 3 1
    3 0 2
    1 2 7

    00 01 02
    10 11 12
    20 21 22

    out:
    YES
    */

    freopen("input.txt", "r", stdin); // r = read

    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }

    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == a[j][i]){
                cnt++;
            }
        }
    }
    // cout << cnt << endl;
    if(cnt == n * n){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }


    return 0;
}