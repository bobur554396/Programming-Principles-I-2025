#include <iostream>

using namespace std;

/*
Function Declaration and Definition
    1. Data type functions - must return "data type" value
    2. Void functions - without any returning value part

    data_type func_name(param/arguments?){
        // function body

        return "value";
    }
*/

void hello(){
    cout << "Hi" << endl;
}

int sum(int a, int b){
    int c = a + b;

    return c;
}



int main() {

    hello(); // calling the function

    // int res = sum(2, 3);

    cout << sum(2, 3) << endl;
    
    return 0;
}

