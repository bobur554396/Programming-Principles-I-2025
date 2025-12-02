#include <iostream>

using namespace std;

long long factorial(long long n){ // 4
    if(n == 1) // base case
        return 1;
    return n * factorial(n-1);
}


/*

[]
[2 * factorial(1)]
[3 * factorial(2)]
[4 * factorial(3)]
*/

/*
4! = 4 * 3! => 4 * factorial(3)
3! = 3 * 2! => 3 * factorial(2)
2! = 2 * 1! => 2 * factorial(1)
1! = 1 // base case


int fact = 1;
for(int i = 1; i <= n; i++){
    fact *= i;
}

*/

// - [ ] factorial
int main(){
    int n;
    cin >> n;

    cout << factorial(n) << endl;
    

    return 0;
}