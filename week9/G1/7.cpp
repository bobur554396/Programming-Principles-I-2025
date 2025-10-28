#include <iostream>

using namespace std;

/*
Types of funtions: 
    1. Data type returing function
    2. Void function


    1. Data type returing function

    data_type func_name(params?/arguments?){
        // function body / instructions

        retrurning part;
    }
*/

int max2(int a, int b){
    if(a > b)
        return a;
    else
        return b;
}

int max3(int a, int b){
    if(a > b)
        return a;
    return b;
}

// Main function / entrypoint to the program
int main() {
    
    cout << max(4, -6) << endl;

    return 0;
}
