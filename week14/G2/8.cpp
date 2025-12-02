#include <iostream>

using namespace std;

int sumOfDigits(int n){
    if(n == 0) // base case
        return 0;
    return (n % 10) + sumOfDigits(n / 10);
}

/*
123 => 3 + sumOfDigits(12)
12 => 2 + sumOfDigits(1)
1 => 1 + sumOfDigits(0)
0 => base case => return 0
*/

/*
while(n){ // (n != 0)
    digit = n % 10;
    sum += digit;
    n = n / 10;
}

*/

int main(){
    // 123 => 1 + 2 + 3 = 6
    int n;
    cin >> n;

    cout << sumOfDigits(n) << endl;

    return 0;
}