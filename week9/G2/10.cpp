#include <iostream>

using namespace std;

int global = 100;  // Global variable

void demo() {
    int local = 5;  // Local variable in current function
    cout << "Local: " << local << endl;
    global++;
    cout << "Global in demo: " << global << endl;
}

int main() {
    // int a = 2; // local variable in "main" function
    demo();
    cout << "Global in main: " << global << endl;
    // cout << local;  // Error! local is not accessible

    return 0;
}