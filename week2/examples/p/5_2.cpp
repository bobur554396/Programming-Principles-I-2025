#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] prime number
    7 -> YES
    10 -> NO
    13 -> YES
    12 -> NO
    */
    int n;
    cin >> n;
    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++;   
        }
    }
    if(count == 2){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    

    return 0;
}