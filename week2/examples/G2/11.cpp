#include <iostream>
#include <string>

using namespace std;

int main() {
    // 4. Conditional Statements

    /*
    if (condition) {
        // code to execute if condition is true
    } else {
        // code to execute if condition is false
    }
    */
    int a;
    cin >> a;
    
    if(a > 0) {
        cout << "Positive" << endl;
    } else {
        cout << "Non-positive" << endl;
    }


    return 0;
}