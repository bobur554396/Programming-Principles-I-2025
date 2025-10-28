#include <iostream>

using namespace std;

// Function declaration
int my_min(int a, int b);

int main() {
    
    cout << my_min(4, -6) << endl;

    return 0;
}

// Function implementation
int my_min(int a, int b){
    return (a < b) ? a : b;
}
