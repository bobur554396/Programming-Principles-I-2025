#include <iostream>

using namespace std;

int main() {
    
    /*
    1
    2
    3
    7
    0
    
    0 + 1 + 2 + 3 + 7 = 12
    */

    int a, sum = 0;
    while(true){
        cin >> a;
        if(a == 0) 
            break;        
        
        sum += a; // sum = sum + a;
    }

    cout << sum << endl;
    

    return 0;
}