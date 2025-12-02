#include <iostream>

using namespace std;

void showNumbers(int n){ // n = 3;
    if(n == 0) // base case
        return;

    showNumbers(n-1); // 3 - 1 = 2;

    cout << n << " ";
}
/*

[]
[]
[cout << 1 << " ";]
[cout << 2 << " ";]
[cout << 3 << " ";]

*/

int main(){
//  - [ ] show numbers from 1 till n

    int n;
    cin >> n;

    showNumbers(n);
    

    return 0;
}