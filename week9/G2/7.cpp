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

void greeting(string name){
    cout << "Hi " << name << "!" << endl;
}


int main() {
    cout << "Enter your name...\n";
    string s;
    cin >> s;

    greeting(s);

    return 0;
}

