#include <iostream>
#include <string>

using namespace std;

int main() {
    
    /*
    for (initialization of iterator; condition; update of iterator) {
        // code to repeat
    }    
    */

    for(int i = 1; i <= 10; i *= 2) {
        cout << "count: " << i << endl;
    }


    return 0;
}