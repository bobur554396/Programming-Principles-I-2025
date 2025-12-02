#include <iostream>

using namespace std;

int sumOfDigits(int n){
    if(n == 0) // base case
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

// 123


/*
123

1. 123 -> 3 + sumOfDigits(12)
2. 12 -> 2 + sumOfDigits(1);
3. 1 -> 1 + sumOfDigits(0);
4. 0 -> 0; // base case

*/
int main(){
    int n;
    cin >> n; // 123

    cout << sumOfDigits(n) << endl;


    return 0;
}