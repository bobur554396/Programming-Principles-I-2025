#include <iostream>

using namespace std;


// Recursive function - Recursion

/*
    A recursive function is a function that calls itself in order to solve a problem.
    1. Base case
    2. Recursive case


    // Stack overflow
    When a function calls itself too many times without reaching a base case, it can lead to a stack overflow error.
*/

void show1(){
    cout << "Line 1 from show1 function" << endl;
    cout << "Line 2 from show1 function" << endl;
    cout << "Line 3 from show1 function" << endl;
    
    show1();

    cout << "Line 4 from show1 function" << endl;
}

int main(){
    cout << "Starting of main function" << endl;
    
    show1();

    cout << "End of main function" << endl;

    return 0;
}