#include <iostream>

using namespace std;

void welcome(){
    cout << "message from welcome function" << endl;
}

void hi(){
    cout << "message from hi function" << endl;

    welcome();

    cout << "Back to hi function" << endl;
}

// Function Stack

/*
Stack

    []
    []
    []
    []
    [cout << "Back to hi function" << endl;]
    [cout << "End of main function" << endl;]

*/

int main(){
    cout << "Starting of main function" << endl;
    
    hi();

    cout << "End of main function" << endl;

    return 0;
}