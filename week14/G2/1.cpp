#include <iostream>

using namespace std;


/*
In any functuon there is - context/scope

Stack

*/
void welcome(){
    cout << "Welcome to the C++ program!" << endl;
}

void hello(){
    cout << "Hello, World!" << endl;

    welcome();

    cout << "Exiting the hello function." << endl;
}


/*


    []
    []
    []
    [cout << "Exiting the hello function." << endl;]
    [cout << "Ending point of the main function." << endl;]
*/

int main(){
    cout << "Starting point of the main function." << endl;
    
    hello();

    cout << "Ending point of the main function." << endl;

    return 0;
}