#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] prime number
    */
    int n;
    cin >> n;

    // [2...n-1]
    // 10 - 2, 5
    // 13 - 
    // 12 - 2, 3, 4, 6
    // 7 - 
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "YES" << endl;
    
    return 0;
}