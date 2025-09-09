#include <iostream>
#include <string>

using namespace std;

int main() {
    /*
    1.
    if (condition) {
        // code to execute if condition is true
    }   

    2.
    if (condition) {
        // code if true
    } else {
        // code if false
    }    
    */

    int a;
    cin >> a;
    if (a > 0) {
        cout << "Positive" << endl;
    } else {
        cout << "Non-positive" << endl;
    }

    return 0;
}