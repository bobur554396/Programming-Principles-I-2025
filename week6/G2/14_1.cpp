#include <iostream>

using namespace std;

int main() {
    // - [ ] symmetric matrix if size N x N
    /*
    in:
    3
    2 3 8
    3 0 7
    8 7 1

    00 01 02
    10 11 12
    20 21 22

    out:
    YES
    */

    freopen("input.txt", "r", stdin); // r - read, w - write

    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin >> a[i][j];

    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] == a[j][i]){
                cnt++;
            }
        }
    }

    if(cnt == n * n)
        cout << "YES\n";
    else
        cout << "NO\n";
    
                
    
    


    return 0;
}