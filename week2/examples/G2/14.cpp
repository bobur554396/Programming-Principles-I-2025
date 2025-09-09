#include <iostream>
#include <string>

using namespace std;

int main() {
    char c = 'A'; // single character
    string greeting = "Hello World";
    string name = "Alice1&^%$#@!";
    string message = greeting + ", " + name;

    cout << name.length() << endl;
    cout << message << endl;

    return 0;
}