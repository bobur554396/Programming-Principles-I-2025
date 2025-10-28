#include <iostream>

using namespace std;

/*
Types of funtions: 
    1. Data type returing function - Returning a value
    2. Void function - no return value


    1. Data type returing function

    data_type func_name(params?/arguments?){
        // function body / instructions

        retrurning part;
    }
*/

// 2. Void function
void greeting(string name){
    cout << "Hi " << name << "!\n";
}


int main() {
    cout << "Enter your name...\n";
    string a;
    cin >> a;
    
    greeting(a);


    return 0;
}
