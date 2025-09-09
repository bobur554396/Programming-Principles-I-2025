#include <iostream>

using namespace std;

int main() {
    /*
    - [ ] Fibonacci sequence (0, 1, 1, 2, 3, 5, …)


    0 1
    a b
        1 
      a b  2 
              3 
                5
    */

    int n;
    cin >> n;

    int a = 0, b = 1;
    for(int i = 0; i < n; i++){
        cout << a << " ";
        int c = a + b;
        a = b;
        b = c;
    }

    
    

    return 0;
}