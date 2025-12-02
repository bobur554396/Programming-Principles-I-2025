#include <iostream>

using namespace std;

// Error: Stack overflow

/*
    Recursion - A function calling itself

    1. Base case - Stopping condition
    2. Recursive case - Function calls itself with modified parameters
*/

int cnt = 0;
void hello(){
    cnt++; // cnt+=2;
    if(cnt == 3) // base case
        return;
    
    cout << "Line 1 from hello function." << endl;
    cout << "Line 2 from hello function." << endl;

    hello();

    cout << "Line 3 from hello function." << endl;
}

int main(){
    cout << "Starting point of the main function." << endl;
    
    hello();

    cout << "Ending point of the main function." << endl;

    return 0;
}