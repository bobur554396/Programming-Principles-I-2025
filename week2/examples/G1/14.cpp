#include <iostream>
#include <string>

using namespace std;

int main() {
    /*
    while (condition) {
        // code to repeat
    }
    */
    int balance = 100;
    while (balance > 0) {
        cout << "Remaining balance: " << balance << endl;
        balance -= 30; // spend money
    }

     
    

    return 0;
}