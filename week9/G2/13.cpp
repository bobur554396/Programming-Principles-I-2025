#include <iostream>

using namespace std;

bool isPrime(int n){
    for(int i = 2; i < n; i++){
        if(n % i == 0)
            return false;
    }
    return true;
}


int main() {
    // isPrime
    
    int n;
    cin >> n;

    if(isPrime(n) == true)
        cout << "YES\n";
    else   
        cout << "NO\n";

    return 0;
}