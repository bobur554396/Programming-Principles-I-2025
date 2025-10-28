#include <iostream>

using namespace std;

// Declaration of the function
int myMax(int a, int b);

int main() {

    cout << myMax(10, 20) << endl;
    
    return 0;
}


// Implementation of the function
int myMax(int a, int b){
    return (a > b) ? a : b;
}

