#include <iostream>
#include <string>

using namespace std;

int main() {
    // all even number from 1 to 100 
    
    for(int i = 1; i <= 100; i++) {
        if(i % 2 == 0) {
            cout << i << " ";
        }   
    }


    return 0;
}