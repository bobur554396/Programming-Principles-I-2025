#include <iostream>

using namespace std;

int main() {
    // - [ ] max element in N x N matrix
    /*
    in:
    3
    4 3 1
    9 0 2
    5 6 7

    out:
    9
    */
    // freopen("/Users/boburmukhsimbayev/Desktop/examples/PPI2025/week6/input.txt", "r", stdin); // r = read
    // freopen("../input.txt", "r", stdin); // r = read
    freopen("input.txt", "r", stdin); // r = read
    
    // freopen("output.txt", "w", stdout); // w = write

    // Reading part
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }
    int maxValue = a[0][0];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(a[i][j] > maxValue){
                maxValue = a[i][j];
            }
        }
    }  
    
    cout << maxValue << endl;
    

    

    return 0;
}