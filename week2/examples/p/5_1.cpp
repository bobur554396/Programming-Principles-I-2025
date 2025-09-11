#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] Show count of divisors of n
    7 -> 1 7 => 2
    10 -> 1 2 5 10 => 4
    13 -> 1 13 => 2
    12 -> 1 2 3 4 6 12 => 6
    */
    int n;
    cin >> n;

    int count = 0;
    for(int i = 1; i <= n; i++){
        if(n % i == 0){
            count++; // count = count + 1;  
        }
    }
    cout << count << endl;
    
    

    return 0;
}