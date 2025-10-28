#include <iostream>
using namespace std;

int global = 100;  // Global variable

void demo() {
    int a = 3; // local var
    int local = 5;  // Local to function
    cout << "Local: " << local << endl;
    global++;
    cout << "Global from demo func: " << global << endl;
}

int main() {
    int a = 2; // local var
    demo();
    cout << "Global in main: " << global << endl;
    // cout << local;  // Error! local is not accessible
    return 0;
}