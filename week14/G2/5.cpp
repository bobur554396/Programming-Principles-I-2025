#include <iostream>

using namespace std;

void showNumbers(int n){ // n = 3;
    if(n == 0) // base case
        return;

    cout << n << " ";

    showNumbers(n-1); // 3 - 1 = 2;
}

int main(){
//  - [ ] show numbers from n till 1

    int n;
    cin >> n;

    showNumbers(n);
    

    return 0;
}