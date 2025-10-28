#include <iostream>

using namespace std;

long long factorial(int n){
    long long res = 1;
    for(int i = 1; i <= n; i++)
        res *= i;

    return res;
}

int main() {
    // 4! = 1 * 2 * 3 * 4 = 24
    int n;
    cin >> n;

    cout << factorial(n) << endl;

    return 0;
}