#include <iostream>
#include <string>

using namespace std;

int main() {
    char c = 'H';
    string greeting = "Hello World";
    string name;
    cin >> name;
    string message = greeting + ", " + name;

    cout << message << endl;

    return 0;
}