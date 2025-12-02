#include <iostream>

using namespace std;

// - [ ] show numbers from 1 till n / reverse: from n till 1


void showNumbers(int n){
    if(n == 0) // base case
        return;

    cout << n << "  ";

    showNumbers(n - 1);
}

/*
1. showNumbers(3)
    2. showNumbers(2)
        3. showNumbers(1)
            4. showNumbers(0)
                // base case
            4. print 1
        3. print 2
    2. print 3

*/

int main(){
    int n;
    cin >> n; // 3

    showNumbers(n); // 3


    return 0;
}