#include <iostream>

using namespace std;

bool isPrime(int n){
    // for(int i = 2; i * i < n; i++){    
    // for(int i = 2; i < sqrt(n); i++){    
    // for(int i = 2; i <= n / 2; i++){    
    for(int i = 2; i < n; i++){
        if(n % i == 0)
            return false;
    }
    return true;  
}


int main() {
    /*
    Implement function isPrime

    in:
    7

    out:
    yes
    */
    int n;
    cin >> n;

    if(isPrime(n))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}